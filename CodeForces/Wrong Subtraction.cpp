#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,K;
    cin>>n>>K;
    while(K--)
    {
        if(n%10!=0)
            n--;
        else
            n=n/10;
    }
    cout<<n<<endl;
    return 0;
}
