#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,d;
        cin>>n;
        if(n>10)
        {
            d=n-10;
            cout<<d<<" "<<10<<endl;
        }
        else
            cout<<"0"<<" "<<n<<endl;
    }
    return 0;
}
