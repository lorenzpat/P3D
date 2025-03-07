#pragma once

#include "memory"

#include "Core.h"

#include "spdlog\spdlog.h"

namespace P3D {

	class P3D_API Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:

		static std::shared_ptr<spdlog::logger> s_CoreLogger;

		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core Log Macros

#define P3D_CORE_TRACE(...) ::P3D::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define P3D_CORE_INFO(...)	::P3D::Log::GetCoreLogger()->info(__VA_ARGS__)
#define P3D_CORE_WARN(...)	::P3D::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define P3D_CORE_ERROR(...) ::P3D::Log::GetCoreLogger()->error(__VA_ARGS__)
#define P3D_CORE_FATAL(...) ::P3D::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client Log Macros

#define P3D_CLIENT_TRACE(...)	::P3D::Log::GetClientLogger()->trace(__VA_ARGS__)
#define P3D_CLIENT_INFO(...)	::P3D::Log::GetClientLogger()->info(__VA_ARGS__)
#define P3D_CLIENT_WARN(...)	::P3D::Log::GetClientLogger()->warn(__VA_ARGS__)
#define P3D_CLIENT_ERROR(...)	::P3D::Log::GetClientLogger()->error(__VA_ARGS__)
#define P3D_CLIENT_FATAL(...)	::P3D::Log::GetClientLogger()->critical(__VA_ARGS__)