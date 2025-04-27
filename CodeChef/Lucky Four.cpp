#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,cnt,rem;
    cin>>n;
    while(n--)
    {
        cin>>a;
        cnt=0;
        while(a>1)
        {
            rem=a%10;
            if(rem==4)
                cnt++;
            a=a/10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
