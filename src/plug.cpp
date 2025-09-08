#include <stdio.h>
#include "dloader.hpp"

int EXPORTING func()
{
  return 11;
}

void EXPORTING output(const char* msg)
{
  printf("%s\n",msg);
}
