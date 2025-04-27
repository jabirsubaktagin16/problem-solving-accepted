#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,res=0;
        cin>>n;
        for(int i=n;i>1;i--)
        {
            res=res+(i*i);
            i--;
        }
        if(n%2==0)
            cout<<res<<endl;
        else
            cout<<res+1<<endl;
    }
    return 0;
}
