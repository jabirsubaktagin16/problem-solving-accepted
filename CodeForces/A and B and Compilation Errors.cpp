#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,sum=0,sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    for(int i=0;i<n-1;i++){
        cin>>a;
        sum1+=a;
    }
    for(int i=0;i<n-2;i++){
        cin>>a;
        sum2+=a;
    }
    cout<<sum-sum1<<endl;
    cout<<sum1-sum2<<endl;
    return 0;
}
