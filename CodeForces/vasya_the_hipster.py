a, b = map(int, input().split())
ans = int(abs(a-b))
if a>b:
  print(f"{b} {int(ans/2)}")
else:
  print(f"{a} {int(ans/2)}")