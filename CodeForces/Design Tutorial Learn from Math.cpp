#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=4;
    cin>>n;
    if(n%2==0)
        cout<<a<<" "<<(n-a)<<endl;
    else{
        int x=9,y=n-x;
        if(x>y)
            cout<<y<<" "<<x<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
    return 0;
}
