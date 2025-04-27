#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b=a%10;

        while(a>=10)
        {
            a=a/10;
        }

        cout<<a+b<<endl;
    }
    return 0;
}
