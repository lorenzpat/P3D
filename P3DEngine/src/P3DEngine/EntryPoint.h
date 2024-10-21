#pragma once

#ifdef PLATFORM_WINDOWSBUILD

extern P3D::Application* CreateApplication();

int main(int argc, char** argv) {

	printf("Engine Running");
	auto mySandbox = CreateApplication();
	mySandbox->Run();
	delete mySandbox;

}

#endif PLATFORM_WINDOWSBUILD
