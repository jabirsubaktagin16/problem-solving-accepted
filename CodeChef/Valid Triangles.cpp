#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,A,B,C;
    cin>>n;
    while(n--)
    {
        cin>>A>>B>>C;
        if((A+B+C)==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
