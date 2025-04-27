#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i,c=0;

    for(i=0; i<n; i++)
        cin>>arr[i];
    int d,m;
    cin>>d>>m;
    int s=0,l=1;
    i=0;

    while(m<=n)
    {
        l=0;
        s=0;
        while(l<m)
        {
            s=s+arr[l+i];
            l=l+1;
        }
        if(s==d)
        {
            c=c+1;
        }
        i=i+1;
        n=n-1;
    }
    cout<<c<<endl;
    return 0;
}