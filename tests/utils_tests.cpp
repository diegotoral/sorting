#include <vector>
#include <cassert>

#include "utils.h"


void test_swap_integers()
{
  std::vector<int> v = { 1, 2 };

  swap(v, 0, 1);

  assert(v[0] == 2);
  assert(v[1] == 1);
}


int main(int argc, char **argv)
{
  std::cout << "test_swap_integers..." << std::endl;
  test_swap_integers();

  return 0;
}
