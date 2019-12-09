#pragma once


#ifdef EX_PLATFORM_WINDOWS	
	#if EX_BUILD_DLL
		#define EX_API __declspec(dllexport)
	#else
		#define EX_API __declspec(dllimport)
	#endif 
#else 
	#error Exia only works for Windows
#endif