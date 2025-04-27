#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string st;
    cin>>T;
    while(T--)
    {
        cin>>st;
        reverse(st.begin(),st.end());
        cout<<st<<endl;
    }
    return 0;
}
