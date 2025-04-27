#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    long long int maximum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maximum)
            maximum=arr[i];
    }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum+=(maximum-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
