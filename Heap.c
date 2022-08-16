#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b);
void minHeap(int * arr, int i, int len);
void maxHeap(int * arr, int i, int len);

int main(void) {
  int nodes;
  printf("노드 개수 입력 : ");
  scanf("%d", &nodes);
  
  int * arr = (int*)malloc(sizeof(int)*(nodes+1));
  int input = 0;
  
  for (int i = 1; i <= nodes; i++) {
    printf("데이터 입력 : ");
    scanf("%d", &input);
    arr[i] = input;
  }

  minHeap(arr, nodes/2, nodes);

  printf("정렬 결과 : ");
  for (int i = 1; i <= nodes; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  return 0;
}

// 데이터 교환 함수
void swap(int * a, int * b) {
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

// 최소 힙 정렬 함수
void minHeap(int * arr, int i, int len) {
  printf("정렬 과정 : ");
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

// 최대 힙 정렬 함수
void maxHeap(int * arr, int i, int len) {
  printf("정렬 과정 : ");
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