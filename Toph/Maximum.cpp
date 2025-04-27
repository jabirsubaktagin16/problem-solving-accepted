#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000],maximum=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        maximum=max(maximum,arr[i]);
    }
    cout<<maximum<<endl;
}
