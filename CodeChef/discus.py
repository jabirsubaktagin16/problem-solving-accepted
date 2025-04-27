def discus(a, b, c):
  return max(a, max(b, c))

t = int(input())
for i in range(t):
  a, b, c = map(int,input().split())
  print(discus(a, b, c))