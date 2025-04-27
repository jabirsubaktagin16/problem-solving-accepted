#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3],ans=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    ans=arr[2]-(arr[0]+arr[1]);
    if(ans<0)
        ans=0;
    else
        ans++;
    cout<<ans<<endl;
    return 0;
}
