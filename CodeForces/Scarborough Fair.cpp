#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,r;
    string s;
    char c1,c2;

    cin>>n>>m>>s;
    while(m--){
        cin>>x>>r>>c1>>c2;
        for(int i=x-1; i<r ; i++){
            if(s.at(i)==c1)
                s.at(i)=c2;
        }
    }
    cout<<s<<endl;
    return 0;
}
