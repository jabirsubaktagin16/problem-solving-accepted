def selfdef(arr):
  cnt = 0
  for i in range(len(arr)):
    if arr[i]>=10 and arr[i]<=60:
      cnt = cnt+1
  return cnt

t = int(input())
for i in range(t):
  n = int(input())
  arr = list(map(int, input().split()))
  print(selfdef(arr))