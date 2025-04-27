#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int N,K,t;
        cin>>N>>K;
        t=N/K;
        if(t%K==0)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    return 0;
}
