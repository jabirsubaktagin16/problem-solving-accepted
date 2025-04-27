#include<bits/stdc++.h>
using namespace std;
int main(){

    string st;
    cin>>st;

    set<char>s;

    for(int i=0;i<st.length();i++){
        s.insert(st[i]);
    }

    if(s.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
