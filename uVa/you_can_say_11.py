while True:
  s = input()
  if s=='0':
    break
  slen = len(s)
  sum = 0
  for i in range(slen):
    if i%2==0:
      sum = sum+int(s[i])
    else:
      sum = sum-int(s[i])
  
  if sum<0:
    sum = sum*-1
  
  if sum%11==0:
    print(f'{s} is a multiple of 11.')
  else:
    print(f'{s} is not a multiple of 11.')