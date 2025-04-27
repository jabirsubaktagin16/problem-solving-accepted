#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if(n<38)
            cout<<n<<endl;
        else if(n%5 >= 3)
            cout<<n+ (5-n%5)<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
}