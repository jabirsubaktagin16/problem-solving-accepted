def bath(x, y):
  if 2*y>x:
    return 0
  else:
    return int(x/(2*y))

t = int(input())
for i in range(t):
  x, y = map(int, input().split())
  print(bath(x, y))