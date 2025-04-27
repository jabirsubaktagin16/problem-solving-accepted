#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,up=0,res=0;
    char c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='U')
            up++;
        else
            up--;
        if(up==0 && c=='U')
            res++;
    }
    cout<<res<<'\n';
    return 0;
}
