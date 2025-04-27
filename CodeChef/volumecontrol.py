def volcontrol(x, y):
    return abs(x-y)

T = int(input())

for i in range(T):
    x, y = map(int, input().split())
    print(volcontrol(x, y))