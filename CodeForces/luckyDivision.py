def luckyDivision(a):
  if a % 4 == 0 or a % 7 == 0 or a % 44 == 0 or a % 47 == 0 or a % 74 == 0 or a % 77 == 0 or a % 444 == 0 or a % 447 == 0 or a % 474 == 0 or a % 477 == 0 or a % 744 == 0 or a % 747 == 0 or a % 774 == 0 or a % 777 == 0:
    return 'YES'
  return 'NO'

n = int(input())
print(luckyDivision(n))