#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long p, q, y, g, b, r, a, sum=0;
    cin>>p>>q;
    cin>>y>>g>>b;

    a = g + (3*b);
    r = (2*y) + g;

    if(a>q)
        sum += a-q;
    if(r>p)
        sum += r-p;

    cout<<sum<<endl;
    return 0;
}
