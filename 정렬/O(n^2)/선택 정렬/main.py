def select(arr):
  for i in range(len(arr)-1):
    key = arr[i]
    min = key
    index = i
    for j in range(i, len(arr)):
      if arr[j] < min:
        min = arr[j]
        index = j
    arr[i] = min
    arr[index] = key
  return arr
