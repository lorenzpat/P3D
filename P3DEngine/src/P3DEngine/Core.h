#pragma once


#ifdef PLATFORM_WINDOWSBUILD
	#ifdef P3D_BUILD_DLL

	#define P3D_API	__declspec(dllexport)
	#else 

	#define P3D_API	__declspec(dllimport)

#	endif // P3D_BUILD

#else
	#error P3D only supports Windows!

#endif // PLATFORM_WINDOWSBUILD


namespace P3D {


	__declspec(dllexport) void Run();

}