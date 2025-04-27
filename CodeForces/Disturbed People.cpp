#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=2;i<n;i++)
    {
        if(arr[i]==0)
        {
            if(arr[i-1]==1 && arr[i+1]==1)
            {
                k++;
                arr[i+1]=0;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
