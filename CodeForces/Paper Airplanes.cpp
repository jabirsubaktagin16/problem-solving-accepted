#include<bits/stdc++.h>
using namespace std;

int main()
{
    double k,n,s,p;

    cin>>k>>n>>s>>p;

    double value = ceil(n/s)*k;
    double result = ceil(value/p);

    cout<<(int)result<<endl;
    return 0;
}
