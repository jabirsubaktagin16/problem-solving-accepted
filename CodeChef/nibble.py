def nibble(n):
  if n%4!=0:
    return 'Not Good'
  return 'Good'

t = int(input())
for i in range(t):
  n = int(input())
  print(nibble(n))