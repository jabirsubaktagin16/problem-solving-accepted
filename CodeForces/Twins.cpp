#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int sum1=0,sum2=0,cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        sum1+=arr[i];
        cnt++;
        for(int j=0;j<i;j++){
            sum2+=arr[j];
        }
        if(sum1>sum2)
            break;
        else
            sum2=0;
    }
    cout<<cnt<<endl;
    return 0;
}
