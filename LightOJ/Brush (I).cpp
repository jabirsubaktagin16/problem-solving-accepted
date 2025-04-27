#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,sum,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int arr[n+1];
        sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
                sum+=arr[i];
        }
        if(sum>=0)
            cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;
    }
    return 0;
}
