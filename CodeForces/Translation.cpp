#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string st1,st2;
    cin>>st1;
    cin>>st2;

    reverse(st2.begin(),st2.end());
    if(st2==st1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
