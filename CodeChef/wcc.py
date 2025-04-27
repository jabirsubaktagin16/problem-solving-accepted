def wcc(x, s):
  c = 0
  n = 0
  result = 0
  for i in range (len(s)):
    if s[i]=='C':
      c = c+2
    elif s[i]=='N':
      n = n+2
    elif s[i]=='D':
      c = c+1
      n = n+1
  if c>n:
    result = 60*x
  elif c!=n:
    result = 40*x
  else:
    result = 55*x
  return result

t = int(input())
for i in range(t):
  x = int(input())
  s = input()
  print(wcc(x, s))