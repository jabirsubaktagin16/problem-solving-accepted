#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt1=0,cnt2=0,k=0;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            cnt1++;
        else
            cnt2++;
    }
    for(int i=1; i<=n; i++)
    {
        if(cnt1>cnt2)
        {
            if(arr[i]%2!=0)
                k=i;
        }
        else
        {
            if(arr[i]%2==0)
                k=i;
        }
    }
    cout<<k<<endl;
    return 0;
}
