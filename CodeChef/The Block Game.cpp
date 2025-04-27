#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,r,sum,temp;
    long long int n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        temp=n;
        while(n>0)
        {
            r=n%10;
            sum=(sum*10)+r;
            n=n/10;
        }
        if(temp == sum)
            cout<<"wins"<<endl;
        else
            cout<<"losses"<<endl;
        sum=0;
    }
    return 0;
}
