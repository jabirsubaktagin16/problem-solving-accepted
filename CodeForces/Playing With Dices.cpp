#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,cnt1=0,cnt2=0,cntfinal=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
            cnt1++;
        else if(abs(b-i)<abs(a-i))
            cnt2++;
        else
            cntfinal++;
    }
    cout<<cnt1<<" "<<cntfinal<<" "<<cnt2<<endl;
    return 0;
}
