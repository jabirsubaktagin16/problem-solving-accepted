#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int cnt=0;
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if(st.at(i)=='n')
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
