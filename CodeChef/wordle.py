def wordle(s, t):
  result = ''
  for i in range(5):
    if s[i]==t[i]:
      result=result+'G'
    else:
      result = result+'B'
  return result

n = int(input())
for i in range(n):
  s = input()
  t = input()
  print(wordle(s, t))