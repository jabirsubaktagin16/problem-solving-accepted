#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int B;
        cin>>B;
        int res=0;
        if(B<4)
            cout<<0<<endl;
        else{
            res=B/2-1;
            cout<<(res*res+res)/2<<endl;
        }
    }
    return 0;
}
