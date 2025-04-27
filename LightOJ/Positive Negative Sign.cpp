#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,n,m;
    int cs=0;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        cout<<"Case "<<++cs<<": "<<(n*m)/2<<'\n';
    }
    return 0;
}
