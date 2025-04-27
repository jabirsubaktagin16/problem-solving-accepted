#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int b=a%10;
    if(b<=5)a=a-b;
    else a=a+(10-b);
    cout<<a;
    return 0;
}
