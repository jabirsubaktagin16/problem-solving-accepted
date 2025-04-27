#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,cnt;
    cin>>n;
    while(n--)
    {
        cin>>a;
        cnt=0;
        if(a%10==0)
            cnt=0;
        else
        {
            a=a*2;
            if(a%10==0)
                cnt++;
            else
                cnt=-1;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
