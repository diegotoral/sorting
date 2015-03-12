#ifndef _UTILS_H_
#define _UTILS_H_

#include <vector>

void usage()
{
  std::cout << "Usage: sorting <algorithm>" << std::endl;
  std::exit(EXIT_FAILURE);
}


template<typename T>
void swap(std::vector<T>*& v, int a, int b)
{
  T aux = v[a];

  v[a] = v[b];
  v[b] = aux;
}

#endif
