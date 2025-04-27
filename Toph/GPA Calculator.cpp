#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,cnt=1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        float arr[a],sum=0.0;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        printf("Case %d: %.3f\n",cnt,(sum/a));
        cnt++;
    }
    return 0;
}
