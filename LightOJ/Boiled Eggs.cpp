#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, T, i=1;
    cin>>T;
    while(T--)
    {
        cin>>n>>p>>q;
        int arr[n], cnt=0, sum=0;
        for(int j=0; j<n ; j++)
        {
            cin>>arr[j];
            sum += arr[j];
            if(cnt<p && sum<=q)
                cnt++;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
        i++;
    }
    return 0;
}
