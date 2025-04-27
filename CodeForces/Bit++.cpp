#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        getchar();

        if(s[0]=='+'||s[2]=='+')
            sum++;
        else if(s[0]=='-'||s[2]=='-')
            sum--;
    }
    cout<<sum<<endl;
    return 0;
}
