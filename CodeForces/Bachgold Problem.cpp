#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    k=n/2;
    if(n%2!=0)
    {
        cout<<k<<endl;
        for(int i=0;i<(k-1);i++)
            cout<<"2 ";
        cout<<"3";
    }
    else
    {
        cout<<k<<endl;
        for(int i=0;i<k;i++)
            cout<<"2 ";
    }
    return 0;
}
