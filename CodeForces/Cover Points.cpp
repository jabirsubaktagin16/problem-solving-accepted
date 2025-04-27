#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int maximum=-1,arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i]>>arr2[i];
        if(arr1[i]+arr2[i]>maximum)
            maximum=arr1[i]+arr2[i];
    }
    cout<<maximum<<endl;
    return 0;
}
