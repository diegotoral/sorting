#include <iostream>
#include <cstdlib>

#include "utils.h"


bool compare(int* a, int* b) { return a > b; }


int main(int argc, char **argv)
{
  if(argc < 2)
    usage();

  std::vector<int> v;

  v.push_back(3);
  v.push_back(2);
  v.push_back(1);

  v_print(v);

  if(strcmp(argv[1], "selection") == 0)
    std::cout << "eba!" << std::endl;
    // SelectionSort::sort(v, compare);
  else
    std::cout << "algorithm not implemented!" << std::endl;

  return 0;
}
