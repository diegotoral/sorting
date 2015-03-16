#ifndef _UTILS_H_
#define _UTILS_H_

#include <vector>


void usage();

template<typename T>
void swap(std::vector<T>& v, int a, int b);

template<typename T>
void v_print(const std::vector<T>& v);

#endif
