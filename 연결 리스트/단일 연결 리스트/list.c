#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct List {
  int data;
  struct List * link;
} list;

list head;
list * last;

void Init() {
  head.link = NULL;
}

bool empty() {
  if (head.link == NULL)
    return true;
  return false;
}

int size() {
  list * ptr = &head;
  int count = 0;
  while (ptr -> link != NULL) {
    ptr = ptr -> link;
    count++;
  }
  return count;
}

void Insert(int n, int data) {
  if (n > size()+1 || n <= 0)
    printf("List out of index.\n");
  else {
    list * prev = &head;
    list * next = &head;
    list * node;
    for (int i = 1; i <= n; i++) {
      prev = next;
      if (prev -> link != NULL)
        next = next -> link;
    }
    node = (list*)malloc(sizeof(list));
    if (prev -> link == NULL) {
      node -> link = NULL;
      last = node;
    } else {
      node -> link = next;
    }
    prev -> link = node;
    node -> data = data;
  }
}

void Delete(int n) {
  if (empty())
    printf("List is empty.\n");
  else if (n > size() || n <= 0)
    printf("List out of index.\n");
  else {
    list * prev = &head;
    list * next = &head;
    for (int i = 1; i <= n; i++) {
      prev = next;
      next = next -> link;
    }
    prev -> link = next -> link;
  }
}

void Search(int n) {
  if (empty())
    printf("List is empty.\n");
  else if (n > size() || n <= 0)
    printf("List out of index.\n");
  else {
    list * ptr = &head;
    for (int i = 1; i <= n; i++)
      ptr = ptr -> link;
    printf("SEARCHED DATA : %d\n", ptr -> data);
  }
}

void Print() {
  list * ptr = &head;
  printf("LINKED LIST : ");
  while (ptr -> link != NULL) {
    ptr = ptr -> link;
    printf("%d ", ptr -> data);
  }
  printf("\n");
}
