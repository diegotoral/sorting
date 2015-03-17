#include <iostream>
#include <cstdlib>

#include "utils.h"
#include "selection-sort.h"


bool compare(int* a, int* b) { return *a > *b; }


int main(int argc, char **argv)
{
  if(argc < 2)
    usage();

  std::vector<int> v;

  v.push_back(3);
  v.push_back(2);
  v.push_back(1);

  std::cout << "before sorting: ";
  v_print(v);

  if(strcmp(argv[1], "selection") == 0)
    SelectionSort::sort(v, compare);
  else
    std::cout << "algorithm not implemented!" << std::endl;

  std::cout << "after sorting: ";
  v_print(v);

  return 0;
}
