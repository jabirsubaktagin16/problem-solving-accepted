#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,alice=0,bob=0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    if(a1!=b1)
    {
        if(a1>b1)
            alice++;
        else
            bob++;
    }
    if(a2!=b2)
    {
        if (a2>b2)
            alice++;
        else
            bob++;
    }
    if(a3!=b3)
    {
        if (a3>b3)
            alice++;
        else
            bob++;
    }

    cout<<alice<<" "<<bob<<endl;

    return 0;
}
