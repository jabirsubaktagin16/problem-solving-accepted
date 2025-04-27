#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1,cnt2=1;
    cin>>n;
    long long int arr[n];

    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
            cnt++;
        else
            cnt=1;
        if(cnt2<cnt)
            cnt2=cnt;
    }
    cout<<cnt2<<endl;
}
