def covSprd(n, d):
  sum = 1
  for i in range(1, d+1):
    if i<=10:
      sum *=2
      if sum>n:
        sum = n
        break
    else:
      sum = sum * 3;
      if sum > n:
        sum = n
        break
  return sum

n = int(input())
for i in range(n):
  n, d = map(int, input().split())
  print(covSprd(n, d))