#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,i=1;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        cout<<"Case "<<i<<": "<<(a+b)<<abs(a-b)<<endl;
        i++;
    }
    return 0;
}
