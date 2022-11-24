def bubble(arr):
  for i in range(len(arr)):
    for index in range(len(arr)-1):
      if arr[index] > arr[index+1]:
        temp = arr[index+1]
        arr[index+1] = arr[index]
        arr[index] = temp
  return arr
