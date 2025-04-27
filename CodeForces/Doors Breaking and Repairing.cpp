#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,cnt=0;
    cin>>n>>x>>y;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=x)
            cnt++;
    }
    if(x>y)
        cout<<n<<endl;
    else
        cout<<(cnt+1)/2<<endl;
    return 0;
}
