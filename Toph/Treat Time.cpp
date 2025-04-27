#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int A,B,C;
    cin>>A>>B>>C;
    if(B<=A && C<=A||B>A && C>A)
        cout<<"Chocolate"<<endl;
    else if(B>A && C<=A)
        cout<<"Ice-cream"<<endl;
    return 0;
}
