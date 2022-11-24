#include <stdio.h>
#include <stdbool.h>

typedef struct queue {
  int data;
  struct queue * link;
} node;

node * head = NULL;
node * last = NULL;

bool empty() {
  if (head == NULL)
    return true;
  return false;
}

void enqueue(int n) {
  node * add = (node*)malloc(sizeof(node));
  add -> data = n;
  add -> link = NULL;
  if (last != NULL)
    last -> link = add;
  last = add;
  if (empty())
    head = add;
  add = NULL;
}

void dequeue() {
  if (!(empty())) {
    int num = head -> data;
    node * temp = head;
    if (head -> link != NULL)
      head = head -> link;
    else {
      head = NULL;
      last = NULL;
    }
    free(temp);
    temp = NULL;
    printf("Data : %d\n", num);
  }
  printf("Queue is empty.\n");
}

void peek() {
  if (empty())
    printf("Queue is empty.\n");
  else
    printf("Data : %d\n", head -> data);
}

int size() {
  if (empty())
    return 0;
  int count = 0;
  node * ptr = head;
  while (ptr -> link != NULL) {
    count++;
    ptr = ptr -> link;
  }
  return ++count;
}