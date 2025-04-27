def gcd(x, y):
  if y==0:
    return x
  return gcd(y, x%y)

t = int(input())
for i in range(t):
  b, c = map(int, input().split())
  print(int(c//gcd(b, c)))