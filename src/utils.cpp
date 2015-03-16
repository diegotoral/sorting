#include "utils.h"

#include <iostream>

void usage()
{
  std::cout << "Usage: sorting <algorithm>" << std::endl;
  std::exit(EXIT_FAILURE);
}


template<typename T>
void swap(std::vector<T>& v, int a, int b)
{
  T aux = v[a];

  v[a] = v[b];
  v[b] = aux;
}

template<typename T>
void v_print(const std::vector<T>& v)
{
  std::cout << "[ ";

  for(std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
  {
    std::cout << *i << " ";
  }

  std::cout << "]" << std::endl;
}
