class stack():
  def __init__(self):
    self.items = []
    
  def push(self, n):
    self.items.append(n)

  def pop(self):
    if len(self.items) == 0:
      return "Stack is empty."
    else:
      value = self.items[-1]
      self.items.pop()
      return value

  def empty(self):
    if len(self.items) == 0:
      return "Stack is empty"
    else:
      return "Stack is not empty."

  def top(self):
    if len(self.items) == 0:
      return "Stack is empty."
    else:
      return self.items[-1]

  def size(self):
    return len(self.items)

if __name__ == "__main__":
  stack = stack()
  # Insert commands by function.
