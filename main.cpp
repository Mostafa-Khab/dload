#include <iostream>

#include "src/plug.hpp"

int main(int argc, const char* argv[])
{
  LIB_HANDLE library = dlopen("libplug." SUFFIX);

  const char* lib_path = "libplug." SUFFIX;
  if(!library) {
  
    std::cerr << "failed to load requested library\n";
    return -1;
  }

  func_t func = (func_t)dlsym(library, "_Z4funcv");
  if(!func)
  {
    std::cerr << "failed to load requested library function\n";
    return -1;
  }

  ouput_t output = (ouput_t)dlsym(library, "_Z6outputPKc");
  if(!output)
  {
    std::cerr << "failed to load requested library function\n";
    return -1;
  }

  output("hello from dll you Idiot");
  std::cout << "func value: " << func() << '\n';
}
