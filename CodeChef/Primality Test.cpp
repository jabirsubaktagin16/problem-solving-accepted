#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        long long n;
        cin>>n;
        int flag=0;
        for(long long j=2;j*j<=n;++j)
        {
            if(n%j==0)
            {
                flag=1;
                break;
            }
        }if (flag==0) cout <<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
