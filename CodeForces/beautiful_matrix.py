ans = 0
posR = 0
posC = 0
for i in range(5):
    arr = [int(x) for x in input().split()]
    for j in range(5):
        if arr[j] == 1:
          posR = i
          posC = j

ans = ans+abs(2 - posR) + abs(2 - posC)
print(ans)