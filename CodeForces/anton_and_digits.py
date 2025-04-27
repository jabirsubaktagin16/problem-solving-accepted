k2, k3, k5, k6 = map(int, input().split())
ans = 0
temp = min(k2, min(k5, k6))
k2, k5, k6 = k2-temp, k5-temp, k6-temp
ans = ans+(temp*256)
temp = min(k3, k2)
ans = ans+(temp*32)
print(ans)