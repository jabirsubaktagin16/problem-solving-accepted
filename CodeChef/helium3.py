def helium3(a, b, x, y):
  if x*y>=a*b:
    return 'Yes'
  return 'No'

t = int(input())
for i in range(t):
  a, b, x, y = map(int,input().split())
  print(helium3(a, b, x, y))