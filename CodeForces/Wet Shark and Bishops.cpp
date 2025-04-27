#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    map<int, int> add;
    map<int, int> sub;
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        cnt+=add[x+y];
        add[x+y]++;
        cnt+=sub[x-y];
        sub[x-y]++;
    }
    cout<<cnt<<endl;
    return 0;
}
