#include <stdlib.h>
#include "traversal.c"

void terminate(node * ptr) {
  if (ptr != NULL) {
    terminate(ptr -> left);
    terminate(ptr -> right);
    free(ptr);
  }
}