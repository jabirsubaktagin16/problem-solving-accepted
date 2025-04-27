#include<bits/stdc++.h>
using namespace std;

int main()
{

    int T,i=1;
    cin>>T;
    while(T--)
    {
        int a,b;
        char ch;
        cin>>a>>ch>>b;
        int res=0;
        if(ch=='+')
            res=a+b;
        if(ch=='*')
            res=a*b;
        if(ch=='-')
            res=a-b;
        cout<<"Case "<<i<<": "<<res<<endl;
        i++;
    }
    return 0;
}
