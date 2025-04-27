#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int x;
    cin>>ch>>x;
    if((ch=='a'||ch=='h') && (x==1||x==8))
        cout<<3<<endl;
    else if(ch=='a'||ch=='h'||x==1||x==8)
        cout<<5<<endl;
    else
        cout<<8<<endl;
    return 0;
}
