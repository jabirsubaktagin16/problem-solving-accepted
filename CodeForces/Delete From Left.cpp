#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int m = 0;

    cin>>s1>>s2;

    int x = s1.size() - 1;
    int y = s2.size() - 1;

    if(x<y) m = y;
    else m = x;

    for( ; m>=0 && x!=-1 && y!=-1; m--){
        if(s1.at(x) == s2.at(y)){
            x--;
            y--;
            continue;
        }else
            break;
    }
    cout<<x+y+2<<endl;

    return 0;
}

