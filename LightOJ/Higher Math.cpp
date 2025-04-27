#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    long long int a,b,c,sum1,sum2;
    while(T--)
    {
        sum1=0;
        sum2=0;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            sum1=a*a;
            sum2=b*b+c*c;
        }
        else if(b>a && b>c)
        {
            sum1=b*b;
            sum2=a*a+c*c;
        }
        else if(c>a && c>b)
        {
            sum1=c*c;
            sum2=a*a+b*b;
        }
        if(sum1==sum2)
            cout<<"Case "<<cs<<": yes"<<endl;
        else
        cout<<"Case "<<cs<<": no"<<endl;
        cs++;
    }
    return 0;
}
