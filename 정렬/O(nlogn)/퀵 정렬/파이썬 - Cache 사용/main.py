def quick(arr):
  if len(arr) <= 1:
    return arr
  less = []; same = []; more = []
  key = arr[len(arr)//2]
  for i in arr:
    if i < key:
      less.append(i)
    elif i == key:
      same.append(i)
    else:
      more.append(i)
  return quick(less) + same + quick(more)
