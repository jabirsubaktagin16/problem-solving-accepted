#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin>>a>>b;

    if(b<=((a+1)/2))
        cout<<(2*b)-1;
    else
    {
        if(a%2==0)
            cout<<a-((a-b)*2);
        else
            cout<<a-((a-b)*2)-1;
    }
    return 0;
}
