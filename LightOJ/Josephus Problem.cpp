#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    if(n==0)
        return 1;
    return (josephus(n-1, k)+k)%n;
}
int main()
{
    int T,cs=0;
    long long int n,k;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        cout<<"Case "<<++cs<<": "<<josephus(n,k)+1<<'\n';
    }
    return 0;
}
