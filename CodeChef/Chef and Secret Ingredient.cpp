#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,X;
    cin>>T;
    while(T--)
    {
        cin>>N>>X;
        int cnt=0;
        long long int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]>=X)
                cnt++;
        }
        if(cnt==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
