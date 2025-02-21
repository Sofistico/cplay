#include <stdlib.h>
struct int_vec {
  int count;
  int* arr;
};

void add(struct int_vec vec, int size, int* arr) {
}

struct int_vec create_list(int initialSize) {
  struct int_vec vec;
  vec.count = 0;
  vec.arr = malloc(initialSize);

  return vec;
}
