#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[102],cnt=0;
    cin>>n;
    for(int j=0;j<n;j++)
        cin>>arr[j];
    for(int i=1;i<n;cnt++)
    {
        if(arr[i+1]!=1 && i<n-1)
            i+=2;
        else
            i++;
    }
    cout<<cnt<<'\n';
    return 0;
}
