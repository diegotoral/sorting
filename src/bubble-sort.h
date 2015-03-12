#ifndef _BUBBLESORT_H_
#define _BUBBLESORT_H_

#include <vector>


namespace BubbleSort {
  template<typename T>
  void sort(std::vector<T>*& v, bool (*compare) (T*, T*));
}


#endif
