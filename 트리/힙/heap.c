#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b) {
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

void minHeap(int * arr, int i, int len) {
  printf("Process : ");
  for (int j = 1; j <= len; j++) {
    printf("%d ", arr[j]);
  }
  printf("\n");
  
  if (i * 2 == len) {
    int left = i * 2;
    if (arr[i] > arr[left])
      swap(&arr[i], &arr[left]);
  } else if (i * 2 < len) {
    int left = i * 2, right = i * 2 + 1;

    if (arr[left] < arr[i] && arr[left] <= arr[right]) {
      swap(&arr[i], &arr[left]);
      minHeap(arr, left, len);
    } else if (arr[right] < arr[i] && arr[right] < arr[left]) {
      swap(&arr[i], &arr[right]);
      minHeap(arr, right, len);
    }
  }
  
  if (i > 1)
    minHeap(arr, i - 1, len);
}

void maxHeap(int * arr, int i, int len) {
  printf("Process : ");
  for (int j = 1; j <= len; j++) {
    printf("%d ", arr[j]);
  }
  printf("\n");
  
  if (i * 2 == len) {
    int left = i * 2;
    if (arr[i] < arr[left])
      swap(&arr[i], &arr[left]);
  } else if (i * 2 < len) {
    int left = i * 2, right = i * 2 + 1;

    if (arr[left] > arr[i] && arr[left] >= arr[right]) {
      swap(&arr[i], &arr[left]);
      maxHeap(arr, left, len);
    } else if (arr[right] > arr[i] && arr[right] > arr[left]) {
      swap(&arr[i], &arr[right]);
      maxHeap(arr, right, len);
    }
  }
  
  if (i > 1)
    maxHeap(arr, i - 1, len);
}