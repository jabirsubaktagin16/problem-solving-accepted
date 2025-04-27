#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,S,sum;
    cin>>n>>S;

    if(S%n==0)
        sum=S/n;
    else
        sum=(S/n)+1;

    cout<<sum<<endl;

    return 0;
}
