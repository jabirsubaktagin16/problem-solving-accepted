#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    long long int n;
    long long int temp,sum,rem;
    while(T--)
    {
        cin>>n;
        temp=n;
        sum=0;
        rem=0;
        while(n>0)
        {
            rem=n%10;
            sum=(sum*10)+rem;
            n=n/10;
        }
        if(temp==sum)
            printf("Case %d: Yes\n",cs);
        else
            printf("Case %d: No\n",cs);
        cs++;
    }
    return 0;
}
