def sale(a, b, c):
  if a<=b and a<=c:
    return b+c
  else:
    if b<=a and b<=c:
      return a+c
    else:
      return a+b

t = int(input())
for i in range(t):
  a, b, c = map(int, input().split())
  print(sale(a, b, c))