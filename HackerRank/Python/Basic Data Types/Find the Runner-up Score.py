if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    a1=max(arr)
    a2=-99999999
    for i in range(n):
        if arr[i]!=a1 and arr[i]>a2:
            a2=arr[i]
    print a2