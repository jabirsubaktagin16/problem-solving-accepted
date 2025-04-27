def qualify(x, a, b):
  if a+2*b>=x:
    return 'Qualify'
  return 'NotQualify'

t = int(input())
for i in range(t):
  x, a, b = map(int, input().split())
  print(qualify(x, a, b))