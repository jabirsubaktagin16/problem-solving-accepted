def carchoice(x1, x2, y1, y2):
  if (y1/x1)<(y2/x2):
    return -1
  elif (y1/x1)>(y2/x2):
    return 1
  else:
    return 0

t = int(input())
for i in range(t):
  x1, x2, y1, y2 = map(int, input().split())
  print(carchoice(x1, x2, y1, y2))