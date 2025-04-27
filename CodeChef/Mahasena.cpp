#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,cnt1=0,cnt2=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a%2==0)
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1>cnt2)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
    return 0;
}
