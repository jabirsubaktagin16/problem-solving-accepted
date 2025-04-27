#include<bits/stdc++.h>
using namespace std;

int main()
{
    string table;
    string card1,card2,card3,card4,card5;
    cin>>table;
    cin>>card1>>card2>>card3>>card4>>card5;
    if(table[0]==card1[0]||table[0]==card2[0]||table[0]==card3[0]||table[0]==card4[0]||table[0]==card5[0])
        cout<<"YES"<<endl;
    else if(table[1]==card1[1]||table[1]==card2[1]||table[1]==card3[1]||table[1]==card4[1]||table[1]==card5[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
