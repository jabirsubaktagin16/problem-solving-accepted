#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int k,res=0;
        int x;
        cin>>k>>x;
        res=9*(k-1)+x;
        cout<<res<<endl;
    }
    return 0;
}
