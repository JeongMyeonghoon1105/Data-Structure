# 전위 순회
def preorder(tree, node, count, num):
  if count == num:
    return

  index = 0

  for i, j in enumerate(tree):
    if j[0] == node:
      index = i
  
  if tree[index][0] != '.':
    print(tree[index][0], end='')
    count = count + 1

    if tree[index][1] != '.':
      preorder(tree, tree[index][1], count, num)
      
    if tree[index][2] != '.':
      preorder(tree, tree[index][2], count, num)

# 중위 순회
def inorder(tree, node, count, num):
  if count == num:
    return

  index = 0

  for i, j in enumerate(tree):
    if j[0] == node:
      index = i
  
  if tree[index][0] != '.':
    if tree[index][1] != '.':
      inorder(tree, tree[index][1], count, num)

    print(tree[index][0], end='')
    count = count + 1
    
    if tree[index][2] != '.':
      inorder(tree, tree[index][2], count, num)

# 후위 순회
def postorder(tree, node, count, num):
  if count == num:
    return

  index = 0

  for i, j in enumerate(tree):
    if j[0] == node:
      index = i
  
  if tree[index][0] != '.':
    if tree[index][1] != '.':
      postorder(tree, tree[index][1], count, num)
      
    if tree[index][2] != '.':
      postorder(tree, tree[index][2], count, num)
      
    print(tree[index][0], end='')
    count = count + 1

# 메인 실행 흐름
num = int(input())
node = []
tree = []

for i in range(0, num):
  root, left, right = input().split()
  node.append(root)
  node.append(left)
  node.append(right)
  tree.append(node)
  node = []

preorder(tree, 'A', 0, num)
print()
inorder(tree, 'A', 0, num)
print()
postorder(tree, 'A', 0, num)
