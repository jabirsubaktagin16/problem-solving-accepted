a = {}

def calculate(x):
    if x in a:
        return a[x]
    if x<=1:
        return 1
    if x%2 == 0:
        y=x//2
    else:
        y = 3*x+1
    
    a[x] = calculate(y)+1
    return a[x]

while True:
    try:
        x,y=map(int, input().split())
    except EOFError:
        break
    
    max_cycle = 0
    
    for i in range(min(x,y), max(x,y)+1):
        n = calculate(i)
        
        if n>max_cycle:
            max_cycle = n
    
    print(f"{x} {y} {max_cycle}")
