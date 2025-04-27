st = input().lower()
vowel = ['a', 'e', 'i', 'o', 'u', 'y']
ans = ""

for i in range(len(st)):
  if st[i] not in vowel:
    ans+='.'
    ans+=st[i]

print(ans)