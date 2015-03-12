#ifndef _SELECTIONSORT_H_
#define _SELECTIONSORT_H_

#include <vector>


namespace SelectionSort {
  template<typename T>
  void sort(std::vector<T>*& v, bool (*compare) (T*, T*));
};

#endif
