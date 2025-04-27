#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int L,v,l,r,ans=0,a=0,b=0,c=0;
        cin>>L>>v>>l>>r;
        a=(l-1)/v;
        b=L/v;
        c=r/v;
        ans=a+b-c;
        cout<<ans<<endl;
    }
    return 0;
}
