#include <stdio.h>
#include "tree.c"

void preorder(node * ptr) {
  if (ptr != NULL) {
    printf("%d ", ptr -> num);
    preorder(ptr -> left);
    preorder(ptr -> right);
  }
}

void inorder(node * ptr) {
  if (ptr != NULL) {
    inorder(ptr -> left);
    printf("%d ", ptr -> num);
    inorder(ptr -> right);
  }
}

void postorder(node * ptr) {
  if (ptr != NULL) {
    postorder(ptr -> left);
    postorder(ptr -> right);
    printf("%d ", ptr -> num);
  }
}
