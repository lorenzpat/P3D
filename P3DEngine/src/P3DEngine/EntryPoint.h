#pragma once


#ifdef PLATFORM_WINDOWSBUILD

extern P3D::Application* CreateApplication();

int main(int argc, char** argv) {

	P3D::Log::init();

	P3D_CLIENT_FATAL("Initialized Log");
	int a = 5432;
	P3D_CLIENT_WARN("Initiiálized Log{0}", a);

	auto mySandbox = CreateApplication();
	mySandbox->Run();
	delete mySandbox;

}

#endif PLATFORM_WINDOWSBUILD
