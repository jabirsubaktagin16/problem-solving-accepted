#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,cs=1;
    cin>>T;
    while(T--)
    {

        cin>>n;
        long long int arr[n],maximum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
                arr[i]=abs(arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>maximum)
                maximum=arr[i];
        }
        cout<<"Case "<<cs<<": "<<maximum<<endl;
        cs++;
    }
    return 0;
}
