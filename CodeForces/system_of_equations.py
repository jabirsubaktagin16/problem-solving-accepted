import math
n, m = map(int, input().split())
ans = 0

sqrtm = int(math.sqrt(m))

for i in range(sqrtm+1):
  a = m-i*i
  if(a*a+i)==n:
    ans = ans+1

print(ans)