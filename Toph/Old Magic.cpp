#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    while(scanf("%d",&T)!=EOF)
    {
        vector<long int>v;
        long int x,m;
        string s;
        char ch[12];
        for(int i=0; i<T; i++)
        {
            cin>>s>>x;
            v.push_back(x);
            if(s[0]=='m')
                ch[i]='m';
            else if(s[0]=='a')
                ch[i]='a';
            else if(s[0]=='s')
                ch[i]='s';
            else if(s[0]=='d')
                ch[i]='d';
        }
        cin>>m;
        long int ans=m;
        for(int i=T-1; i>=0; i--)
        {
            if(ch[i]=='m')
                ans/=v[i];
            else if(ch[i]=='a')
                ans-=v[i];
            else if(ch[i]=='s')
                ans+=v[i];
            else if(ch[i]=='d')
                ans*=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
