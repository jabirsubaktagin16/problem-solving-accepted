#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;
    int cnt=1;
    for(int i=1; i<st.length(); i++)
    {
        if(st[i]==st[i-1])
        {
            cnt+=1;
            if(cnt==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            cnt=1;
    }
    cout<<"NO"<<endl;
    return 0;
}
