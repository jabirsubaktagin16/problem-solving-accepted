#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int a,count0=0,count1=0;

    while(T--)
    {
        cin>>a;
        if(a==0)
            count0++;
        else
            count1=max(count0+1,count1+1);
    }
    cout<<max(count0,count1);
    return 0;
}
