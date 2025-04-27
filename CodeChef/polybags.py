def polybags(n):
  if n%10!=0:
    return int((n/10))+1
  else:
    return int(n/10);

t = int(input())
for i in range(t):
  n = int(input())
  print(polybags(n))