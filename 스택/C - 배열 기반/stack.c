#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void push(int * len, int * stack, int n) {
  stack = realloc(stack, sizeof(int) * ((*len)+1));
  stack[(*len)++] = n;
}

void pop(int * len, int * stack) {
  if ((*len) > 1) {
    printf("Data : %d\n", stack[--(*len)]);
  } else {
    printf("Stack is empty.\n");
  }
}

void print(int * len, int * stack) {
  printf("Stack : ");
  for (int i = 1; i < (*len); i++)
    printf("%d ", stack[i]);
  printf("\n");
}
