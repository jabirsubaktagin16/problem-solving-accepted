#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,b;
    cin>>n>>k;
    long long int arr[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    sum=sum-arr[k];
    if((sum/2)==b)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-(sum/2)<<endl;
    return 0;
}
