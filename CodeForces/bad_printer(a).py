def bad_printer(s):
  for i in range(len(s)):
    if s[i]=='?':
      return 'No'
  return 'Yes'
s = input()
print(bad_printer(s))