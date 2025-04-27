#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,l,r,d,res;
    cin>>q;
    while(q--)
    {
        res=0;
        cin>>l>>r>>d;
        if(d<l)
            res=d;
        else
            res=(r/d+1)*d;
        cout<<res<<endl;
    }
    return 0;
}
