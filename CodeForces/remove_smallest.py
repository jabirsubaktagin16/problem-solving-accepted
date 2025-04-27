t = int(input())
f = 0

while t>0:
  f = 0
  n = int(input())
  arr = list(map(int,input().strip().split()))[:n]

  arr.sort()
  for i in range(1, n):
    if (arr[i]-arr[i-1])>1:
      f = 1
      print("NO")
      break
  if f==0:
    print("YES")
  t = t-1