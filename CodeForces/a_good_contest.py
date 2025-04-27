t = int(input())
d = 0
for i in range(t):
  c, a, b = input().split()
  if int(a)>=2400 and int(b)>int(a):
    d = d+1
if d>=1:
  print("YES")
else:
  print("NO")