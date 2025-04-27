#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,cs=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        if(s[0]=='A')
        {
            if(n%3==1)
                cout<<"Case "<<++cs<<": Bob"<<'\n';
            else
                cout<<"Case "<<++cs<<": Alice"<<'\n';
        }
        else
        {
            if(n%3==0)
                cout<<"Case "<<++cs<<": Alice"<<'\n';
            else
                cout<<"Case "<<++cs<<": Bob"<<'\n';
        }
    }
    return 0;
}
