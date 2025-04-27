#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,x,y,z;
    cin>>T;
    while(T--)
    {
        int a=0,b=0;
        cin>>x>>y>>z;
        a=abs(z-x);
        b=abs(y-z);
        if(a>b)
            cout<<"Cat B"<<endl;
        else if(a<b)
            cout<<"Cat A"<<endl;
        else
            cout<<"Mouse C"<<endl;
    }
    return 0;
}