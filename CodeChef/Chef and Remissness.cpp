#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,A,B,sum;
    cin>>n;
    while(n--)
    {
        cin>>A>>B;
        sum=A+B;
        if(A>B)
            cout<<A<<" "<<sum<<endl;
        else
            cout<<B<<" "<<sum<<endl;
    }
    return 0;
}


