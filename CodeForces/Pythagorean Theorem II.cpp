#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int k=(int)sqrt(i*i+j*j);
            if(k*k==i*i+j*j && k<=n)
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
