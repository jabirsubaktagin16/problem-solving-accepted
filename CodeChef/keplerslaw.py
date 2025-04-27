def kepler(t1, t2, r1, r2):
  lhs = (t1*t1)/(r1*r1*r1)
  rhs = (t2*t2)/(r2*r2*r2)
  return "Yes" if lhs==rhs else "No"

n = int(input())
for i in range(n):
  t1, t2, r1, r2 = map(int, input().split())
  print(kepler(t1, t2, r1, r2))