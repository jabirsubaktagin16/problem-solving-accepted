#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            x=x-1;
        arr[i]=x;
    }
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    return 0;
}
