def squareCounting(n, s):
  return int(s/(n*n))

t = int(input())
for i in range(t):
  n, s = map(int, input().split())
  print(squareCounting(n, s))