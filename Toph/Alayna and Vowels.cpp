#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int cnt=0;
    cin>>st;
    for(int i=0; i<st.length(); i++)
    {
        if(st.at(i)=='a'||st.at(i)=='e'||st.at(i)=='i'||st.at(i)=='o'||st.at(i)=='u'||
                st.at(i)=='A'||st.at(i)=='E'||st.at(i)=='I'||st.at(i)=='O'||st.at(i)=='U')
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
