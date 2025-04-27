#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int d1,d2,d3,result=0;
    cin>>d1>>d2>>d3;
    result=min(d1 + d1 + d2 + d2,
               min(d1 + d2 + d3,
                   min(d1 + d1 + d3 + d3, d2 + d2 + d3 + d3)));
    cout<<result<<endl;
    return 0;
}
