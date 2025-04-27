#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,y,cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x>>y;
            if(x==1||y==1)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
