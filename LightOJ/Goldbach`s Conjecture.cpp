#include <bits/stdc++.h>
using namespace std;
#define N 10000000
bool status[N];
vector<int> v;
void sieve()
{
    memset(status,true,sizeof(status));
    for(int i = 2; i <=sqrt(N); i++)
    {
        for(int j = i*i; j<= N; j+= i)
        {
            status[j] = false;
        }
    }
    for(int i = 2; i <=N; i++)
    {
        if(status[i])
            v.push_back(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t,cases=0;
    sieve();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt = 0;
        for(int i = 0; v[i]<= n-v[i]; i++)
        {
            if(status[n-v[i]])
                cnt++;
        }
        cout<<"Case "<<++cases<<": "<<cnt<<'\n';
    }
    return 0;
}
