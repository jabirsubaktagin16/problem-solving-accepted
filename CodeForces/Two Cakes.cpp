#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,ans=0,minAns=0;
    cin>>n>>a>>b;
    for(int i=1;i<n;i++)
    {
        minAns=min(a/i,b/(n-i));
        ans=max(ans,minAns);
    }
    cout<<ans<<endl;
    return 0;
}
