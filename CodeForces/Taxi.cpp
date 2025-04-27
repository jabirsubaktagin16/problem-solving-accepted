#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,a,cnt1=0,cnt2=0,cnt3=0,sum=0;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>a;
        if(a==1)
            cnt1++;
        if(a==2)
            cnt2++;
        if(a==3)
            cnt3++;
        if(a==4)
            sum++;
    }
    if(cnt3>=cnt1)
    {
        sum+=cnt3;
        if(cnt2%2==0)
            sum+=cnt2/2;
        else
            sum+=(cnt2/2)+1;
        cout<<sum<<endl;
    }
    else
    {
        sum+=cnt3;
        cnt1=cnt1-cnt3;
        if(cnt2%2==0)
            sum+=cnt2/2;
        else
        {
            sum+=(cnt2/2)+1;
            cnt1=cnt1-2;
        }
        if(cnt1>0)
        {
            if(cnt1%4==0)
                sum+=cnt1/4;
            else
                sum+=(cnt1/4)+1;
            cout<<sum<<endl;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
