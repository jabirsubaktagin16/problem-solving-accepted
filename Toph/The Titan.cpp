#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    while(scanf("%d",&n)!=EOF)
    {
        long long int sum=0;
        for(int i=1;i<=n;i++)
            sum+=pow(i,2);
        cout<<sum<<endl;
    }
    return 0;
}
