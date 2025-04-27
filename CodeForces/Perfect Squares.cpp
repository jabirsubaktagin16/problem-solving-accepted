#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    float f;
    for(int i=n-1;i>=0;i--)
    {
        f=sqrt(arr[i]);
        int a=f;
        if(a!=f){
         cout<<arr[i]<<endl;
         break;
        }
    }
    return 0;
}
