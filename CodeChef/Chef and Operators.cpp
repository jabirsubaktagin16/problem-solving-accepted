#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,A,B;
    cin>>n;
    while(n--)
    {
        cin>>A>>B;
        if(A<B)
            cout<<"<"<<endl;
        else if(A>B)
            cout<<">"<<endl;
        else if(A==B)
            cout<<"="<<endl;
    }
    return 0;
}

