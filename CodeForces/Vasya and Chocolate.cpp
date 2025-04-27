#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int s,a,b,c;
        cin>>s>>a>>b>>c;
        long long k=s/c;
        long long x=k/a*b;
        cout<<k + x << endl;
    }
    return 0;
}
