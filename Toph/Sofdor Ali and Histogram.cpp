#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        long int x[n];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
        }
        long long int ans=0,mx=-1;
        for(int i=1,j=n-1; i<=n; i++,j--)
        {
            ans=x[j]*i;
            if(ans>mx)
                mx=ans;
        }
        cout<<"Case "<<cs<<": "<<mx<<endl;
        cs++;
    }
    return 0;
}
