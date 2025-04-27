st = input()
stlen = len(st)
a,x,c=0,0,0
for i in range(stlen):
  if st[i]=='a':
    a = a+1
  else:
    x = x+1

if a>x:
  print(a+x)
elif a==x:
  print(a+x-1)
else:
  while 1:
    x = x-1
    if a>x:
      c = 1
      break
  if c==1:
    print(a+x)