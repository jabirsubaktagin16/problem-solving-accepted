#include<bits/stdc++.h>
using namespace std;

int main()
{

    string st1,st2;
    cin>>st1>>st2;
    if(st1.length()!=st2.length())
    {
        cout<<"No"<<endl;
    }
    else
    {
        for(int i=0; i<st1.length(); i++)
        {
            int flag=0,flag2=0;
            if(st1[i]=='a'||st1[i]=='e'||st1[i]=='i'||st1[i]=='o'||st1[i]=='u')
                flag=1;
            if(st2[i]=='a'||st2[i]=='e'||st2[i]=='i'||st2[i]=='o'||st2[i]=='u')
                flag2=1;
            if(flag!=flag2)
            {
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}
