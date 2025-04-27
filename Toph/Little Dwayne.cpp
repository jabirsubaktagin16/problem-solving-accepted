#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,D,K;
    cin>>T;
    while(T--)
    {
        cin>>D>>K;
        int arr[D],sum=0;
        for(int i=0;i<D;i++)
        {
            cin>>arr[i];
            if(arr[i]>K)
                sum+=(arr[i]-K);
        }
        cout<<sum<<endl;
    }
    return 0;
}
