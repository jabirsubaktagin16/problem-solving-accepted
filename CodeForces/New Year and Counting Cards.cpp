#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int cnt=0;
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if(st.at(i)=='a'||st.at(i)=='e'||st.at(i)=='i'||st.at(i)=='o'||st.at(i)=='u')
            cnt++;
        else if(st.at(i)>48 && st.at(i)<=57 && st.at(i)%2==1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
