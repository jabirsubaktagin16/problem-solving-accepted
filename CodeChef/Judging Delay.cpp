#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int arr1[n],arr2[n];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i]>>arr2[i];
            if(abs(arr2[i]-arr1[i])>5)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
