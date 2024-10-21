#include "P3DHeader.h"
//#include <P3DEngine/Application.cpp>


class SandBoxApplication : public P3D::Application {
public:
	SandBoxApplication()
	{
	
	}
	~SandBoxApplication()
	{
	
	}

};

P3D::Application* CreateApplication()
{

	return new SandBoxApplication();

}