n = int(input())
arr = []
cnt = 0

arr = list(map(int,input().strip().split()))[:n]

arr_max = arr[0]
arr_min = arr[0]

for i in range(n):
  if arr[i]>arr_max:
    arr_max = arr[i]
    cnt = cnt+1
  if arr[i]<arr_min:
    arr_min = arr[i]
    cnt = cnt+1

print(cnt)