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
  #define DLIB_HANDLE HINSTANCE
  #define dlsym GetProcAddress
  #define DLSUFFIX "dll"
  #define dlclose FreeLibrary
#else
  #include <dlfcn.h>
  #define DLIB_HANDLE void*
  #define DLSUFFIX "so"
  #define dlopen(X) dlopen(X, RTLD_NOW)
#endif

#endif /* !DLOADER_HPP */
