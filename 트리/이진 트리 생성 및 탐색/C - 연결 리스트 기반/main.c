#include <stdio.h>
#include "free.c"

int main(void) {
  // Generate Nodes
  node * node1 = generate(1);
  node * node2 = generate(2);
  node * node3 = generate(3);
  node * node4 = generate(4);
  node * node5 = generate(5);
  node * node6 = generate(6);
  // Link Nodes
  link(node1, node2, node3);
  link(node2, node4, node5);
  link(node3, node6, NULL);
  // Print Result of Traversal
  printf("전위 순회 결과 : ");
  preorder(node1);
  printf("\n");
  printf("중위 순회 결과 : ");
  inorder(node1);
  printf("\n");
  printf("후위 순회 결과 : ");
  postorder(node1);
  printf("\n");
  // End
  terminate(node1);
  return 0;
}