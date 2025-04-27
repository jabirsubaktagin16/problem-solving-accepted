#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    int red,green,blue;
    cin>>n>>k;
    red=2*n;
    green=5*n;
    blue=8*n;
    long long int ans=ceil(red/k)+ceil(green/k)+ceil(blue/k);
    cout<<ans<<endl;
    return 0;
}
