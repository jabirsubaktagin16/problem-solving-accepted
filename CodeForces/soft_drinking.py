n, k, l, c, d, p, nl, np = map(int, input().split())

kl=k*l
t1=kl/nl
cd=c*d
t2=p/np
r1=min(t1,cd)
r2=min(r1,t2)

print(int(r2/n))