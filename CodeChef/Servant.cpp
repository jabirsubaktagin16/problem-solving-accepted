#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a<10)
            cout<<"What an obedient servant you are!"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
