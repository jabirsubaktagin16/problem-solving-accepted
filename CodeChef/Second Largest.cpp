#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,A,B,C;
    cin>>n;
    while(n--)
    {
        cin>>A>>B>>C;
        if(A>B && A<C||A<B && A>C)
            cout<<A<<endl;
        else if(B>A && B<C||B<A && B>C)
            cout<<B<<endl;
         else if(C>A && C<B||C<A && C>B)
            cout<<C<<endl;
    }
    return 0;
}
