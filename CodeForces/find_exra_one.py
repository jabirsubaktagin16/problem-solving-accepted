t = int(input())
ck = 0
dk = 0
for i in range(t):
  x, y = map(int, input().split())
  if x>0:
    ck = ck+1
  else:
    dk = dk+1
if ck>=2 and dk>=2:
  print("No")
else:
  print("Yes")