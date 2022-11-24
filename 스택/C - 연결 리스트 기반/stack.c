#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack
{
  int data;
  struct stack * link;
} node;

node * head = NULL;
node * prev = NULL;
node * last = NULL;

bool empty()
{
  if (head == NULL)
    return true;
  return false;
}

void push(int n)
{
  prev = last;
  last = (node*)malloc(sizeof(node));
  last -> data = n;
  last -> link = NULL;
  if (empty())
  {
    head = last;
    prev = last;
  }
  else
  {
    prev -> link = last;
  }
}

void pop()
{
  if (empty())
    printf("Stack is empty.\n");
  else
  {
    printf("Data : %d\n", last->data);
    node * ptr = head;
    while (ptr -> link != prev && ptr != prev)
      ptr = ptr -> link;
    if (prev == head && last == head)
    {
      head = NULL;
      prev = NULL;
      free(last);
      last = NULL;
    }
    else
    {
      free(last);
      last = NULL;
      prev -> link = NULL;
      last = prev;
      prev = ptr;
    }
  }
}

int size()
{
  node * ptr = head;
  int count = 0;
  while (ptr -> link != NULL)
  {
    count++;
    ptr = ptr -> link;
  }
  return ++count;
}

void search(int n)
{
  if (empty())
    printf("\n");
  else
  {
    node * ptr = head;
    int i = 0;
    while (ptr -> data != n)
    {
      ptr = ptr -> link;
      if (ptr -> link == NULL)
        break;
      i++;
    }
    if (ptr -> link == NULL)
      printf("Data is not in stack.\n");
    else
      printf("Index : %d\n", i);
  }
}

void print()
{
  printf("Stack : ");
  if (empty())
    printf("\n");
  else
  {
    node * ptr = head;
    while (ptr -> link != NULL)
    {
      printf("%d ", ptr->data);
      ptr = ptr -> link;
    }
    printf("%d\n", ptr -> data);
  }
}
