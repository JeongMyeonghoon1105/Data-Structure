#include "heap.c"

int main(void) {
  int arr[5] = {1, 5, 4, 3, 2};
  maxHeap(arr, 2, 5);
  //minHeap(arr, 2, 5)
  
  printf("Result : ");
  for (int i = 1; i <= 5; i++)
    printf("%d ", arr[i]);
  printf("\n");
  
  return 0;
}
