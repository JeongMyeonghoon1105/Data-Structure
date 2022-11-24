def insert(arr):
  if len(arr) <= 1:
    return arr
  for i in range(len(arr)):
    j = i - 1
    key = arr[i]
    while key <= arr[j] and j >= 0:
      arr[j+1] = arr[j]
      j = j - 1
    arr[j+1] = key
  return arr
