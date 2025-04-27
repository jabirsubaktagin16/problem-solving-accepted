#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=ceil(n/2.0);
    if(res%2==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}
