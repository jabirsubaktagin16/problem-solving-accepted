#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,d,e,sum;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d>>e;
        sum=a+b+c+d+e;
        if(sum==0)cout<<"Beginner"<<endl;
        else if(sum==1)cout<<"Junior Developer"<<endl;
        else if(sum==2)cout<<"Middle Developer"<<endl;
        else if(sum==3)cout<<"Senior Developer"<<endl;
        else if(sum==4)cout<<"Hacker"<<endl;
        else cout<<"Jeff Dean"<<endl;
    }
    return 0;
}
