typedef struct Node {
  int num;
  struct Node * left;
  struct Node * right;
} node;

node * generate(int data) {
  node * n = (node*)malloc(sizeof(node));
  n -> num = data;
  n -> left = NULL;
  n -> right = NULL;
  return n;
}

void link(node * parent, node * left, node * right) {
  parent -> left = left;
  parent -> right = right;
}
