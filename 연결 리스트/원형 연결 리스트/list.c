#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct list {
  int key;
  bool data;
  struct list * link;
} circle;

circle * head;
circle * prev;

void init(bool n) {
  head = (circle*)malloc(sizeof(circle));
  head -> data = n;
  head -> key = 0;
  prev = head;
}

void insert(bool n, int key) {
  circle * node = (circle*)malloc(sizeof(circle));
  node -> data = n;
  node -> link = head;
  node -> key = key;
  prev -> link = node;
  prev = node;
}
