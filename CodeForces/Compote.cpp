#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long int res=0;
    do
    {
        if(a*2<=b && a*4<=c)
        {
            res+=(a+a*2+a*4);
            break;
        }
        a--;
    }
    while(a!=0);
    cout<<res<<endl;
    return 0;
}
