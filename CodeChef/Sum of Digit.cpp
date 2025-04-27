#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,res=0;
    long long int n;
    cin>>t;
    while(t--)
    {
        res=0;
        cin>>n;
        while(n)
        {
            res=res+n%10;
            n=n/10;
        }
        cout<<res<<endl;
    }
    return 0;
}
