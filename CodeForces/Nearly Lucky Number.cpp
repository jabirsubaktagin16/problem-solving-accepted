#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int cnt=0;

    for(int i=0; i<st.length(); i++){
        if(st.at(i)=='4' || st.at(i)=='7')
            cnt++;
    }
    if(cnt==4 || cnt==7) cout<<"YES";
    else cout<<"NO";

    return 0;
}


