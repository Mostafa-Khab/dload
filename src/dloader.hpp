/*********************************
 * author     : mostafa khaled
 * date       : Sun Sep 29 02:09:04 AM EEST 2024
 * desc       : 
 ********************************/
#ifndef DLOADER_HPP
#define DLOADER_HPP

#if defined(WIN32)
  #define EXPORTING __declspec(dllexport) __stdcall
#else
  #define EXPORTING
#endif

#if defined(WIN32)
  #include <windows.h>
  #define dlopen LoadLibrary
  #define LIB_HANDLE HINSTANCE
  #define dlsym GetProcAddress
  #define SUFFIX "dll"
#else
  #include <dlfcn.h>
  #define LIB_HANDLE void*
  #define SUFFIX "so"
  #define dlopen(X) dlopen(X, RTLD_NOW)
#endif

#endif /* !DLOADER_HPP */
