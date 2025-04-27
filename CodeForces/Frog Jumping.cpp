#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k,div=0,res=0;
        cin>>a>>b>>k;
        div=k/2;
        if(k%2==0)
            res=(a*div)-(b*div);
        else
            res=(a*(div+1))-(b*div);
        cout<<res<<endl;
    }
    return 0;
}
