#include "selection-sort.h"

#include "utils.h"

template<typename T>
void SelectionSort::sort(std::vector<T>& v, bool (*compare) (T*, T*))
{
  int min;

  for(int i = 0; i < v.size() - 1; i++)
  {
    min = i;

    for(int j = i + 1; j < v.size(); j++)
    {
      if (v[j] < min)
        min = j;
    }

    if(min != i)
      swap(v, i, min);
  }
}
