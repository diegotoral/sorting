#include <iostream>
#include <cstdlib>

#include "utils.h"


template<typename T>
bool compare(T*, T*);


int main(int argc, char **argv)
{
  if(argc < 2)
    usage();

  if(strcmp(argv[1], "selection") == 0)
    std::cout << "eba!";
  else
    std::cout << "algorithm not implemented!" << std::endl;

  return 0;
}
