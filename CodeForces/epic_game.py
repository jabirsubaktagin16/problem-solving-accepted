def GCD(x, y):
  while(y):
    x, y = y, x % y
  return x

a, b, n = map(int, input().split())

while True:
  n = n - GCD(a, n)
  if n==0:
    print('0')
    break
  n = n - GCD(b, n)
  if n==0:
    print('1')
    break