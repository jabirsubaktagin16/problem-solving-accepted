#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,res=0;
    cin>>a>>b;

    while(a--)
    {
        cin>>c;
        res+=c;

        if(a>0)
        {
            cout<<res/b<<" ";
            res=res%b;
        }
    }
    cout<<res/b<<endl;
    return 0;
}
