#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    double sum=0.0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum+=a;
    }
    printf("%0.12f\n",sum/n);
    return 0;
}
