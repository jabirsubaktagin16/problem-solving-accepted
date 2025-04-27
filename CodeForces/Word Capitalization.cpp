#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    if(st.at(0)>='a' && st.at(0)<='z')
        st.at(0)=st.at(0)-32;
    cout<<st<<endl;
    return 0;
}
