#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,res;
    cin>>n;
    while(n--)
    {
        cin>>a;
        res=0;
        for(int i=1; i<=a; i++)
        {
            cin>>b>>c;
            res^=i;
        }
        cout<<res<<endl;
    }

    return 0;
}
