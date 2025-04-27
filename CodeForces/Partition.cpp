#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>0)
            sum+=a;
        else
            sum-=a;
    }
    cout<<sum<<endl;
    return 0;
}
