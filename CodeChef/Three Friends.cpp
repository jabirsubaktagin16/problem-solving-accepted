#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int x,y,z;
        cin>>x>>y>>z;
        if((x+z)==y||(y+z)==x||(x+y)==z)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
