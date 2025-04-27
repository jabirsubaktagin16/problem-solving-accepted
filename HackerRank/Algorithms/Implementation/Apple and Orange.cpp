#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,temp,count1=0,count2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
   for(int apple_i = 0; apple_i < m; apple_i++)
    {
        cin>>temp;
        if(temp+a>=s && temp+a<=t)
        {
            count1++;
        }
    }
    for(int orange_i = 0; orange_i < n; orange_i++)
    {
        cin>>temp;
        if(temp+b>=s && temp+b<=t)
        {
            count2++;
        }
    }
    cout<<count1<<endl;
    cout<<count2<<endl;
    return 0;
}
