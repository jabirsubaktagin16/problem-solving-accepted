def cheap(x, y):
    if x<y:
        return "FIRST"
    elif x>y:
        return "SECOND"
    return "ANY"

T = int(input())

for i in range(T):
    x, y = map(int, input().split())
    print(cheap(x, y))
