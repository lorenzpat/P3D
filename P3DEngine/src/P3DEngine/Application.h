#pragma once

#include "Core.h"

namespace P3D {

	class P3D_API Application {
		public:

		Application();

		virtual ~Application();

		void Run();

		//to be defined in Client

		Application* CreateApplication();

	};
}