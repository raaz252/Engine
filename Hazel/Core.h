#pragma once

#ifdef HZ_WINDOWS_PLATFORM
	#ifdef HZ_BUILD_DLL
	#define HAZEL_API __declspec(dllexport)
	#else
	#define HAZEL_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hazel Only support Windows
#endif //HZ_WINDOWS_PLATFORM
