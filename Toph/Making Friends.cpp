#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    int cnt=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}
