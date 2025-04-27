#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1, st2="hello";
    cin>>st1;

    int j=0;
    for(int i=0; i<st1.length() && j<st2.length(); i++){
        if(st1.at(i)==st2.at(j))
            j++;
    }
    if(j==st2.length()) cout<<"YES";
    else cout<<"NO";

    return 0;
}
