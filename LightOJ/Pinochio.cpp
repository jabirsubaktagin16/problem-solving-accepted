#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,cnt,P,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cnt=0;
        P=2;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>P)
            {
                cnt+=ceil((arr[i]-P)/5.0);
                P=arr[i];
            }
        }
        printf("Case %d: %d\n",cs,cnt);
        cs++;
    }
    return 0;
}
