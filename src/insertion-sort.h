#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

#include <vector>


namespace InsertionSort {
  template<typename T>
  void sort(std::vector<T>*& v, bool (*compare) (T*, T*));
}


#endif
