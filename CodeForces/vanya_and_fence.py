n, h = map(int, input().split())
a=list(map(int,input().split(' ')))
min_width = 0
for i in range(n):
  if a[i]<=h:
    min_width = min_width+1
  else:
    min_width = min_width+2
print(min_width)