#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    while(scanf("%d",&n)!=EOF)
    {
        int flag=0;
        for(long long j=2; j*j<=n; ++j)
        {
            if(n%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout <<"NO PUNISHMENT"<<endl;
        else
        {
            while(n--)
                cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
        }
    }
    return 0;
}
