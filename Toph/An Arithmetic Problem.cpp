#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i=1;
    long long a1,a2,a3,n;
    cin>>T;
    while(T--)
    {
        cin>>a1>>a2>>a3>>n;
        if((a3-a2)==(a2-a1))
            cout<<"Case "<<i<<": "<<a1+(a3-a2)*(n-1)<<endl;
        else
            cout<<"Case "<<i<<": Error"<<endl;
        i++;
    }
    return 0;
}
