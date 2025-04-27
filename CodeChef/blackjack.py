def blackJack(a, b):
  if 21-(a+b)>10:
    return -1
  else:
    return 21-(a+b)

t = int(input())
for i in range(t):
  a, b = map(int, input().split())
  print(blackJack(a, b))