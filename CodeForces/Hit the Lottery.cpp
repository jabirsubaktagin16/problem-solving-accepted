#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int note,x;
    cin>>note;
    int cnt=0;
    while(note!=0)
    {
        if(note>=100)
        {
            x=note/100;
            note-=x*100;
            cnt+=x;
        }
        else if(note>=20)
        {
            x=note/20;
            note-=x*20;
            cnt+=x;
        }
        else if(note>=10)
        {
            x=note/10;
            note-=x*10;
            cnt+=x;
        }
        else if(note>=5)
        {
            x=note/5;
            note-=x*5;
            cnt+=x;
        }
        else
        {
            cnt+=note/1;
            note=0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
