#pragma once
#include<stdio.h>
#ifdef HZ_WINDOWS_PLATFORM
	
extern Hazel::Application* Hazel::CreateApplication();
int main(int argc, char** argv)
{
	printf("Hazel Engine Entry Point\n");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}



#endif
