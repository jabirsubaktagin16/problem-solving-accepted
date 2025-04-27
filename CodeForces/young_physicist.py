n = int(input())
sum1 = 0
sum2 = 0
sum3 = 0
for i in range(n):
  a, b, c = map(int,input().split())
  sum1 = sum1+a
  sum2 = sum2+b
  sum3 = sum3+c
if sum1==0 and sum2==0 and sum3==0:
  print("YES")
else:
  print("NO")