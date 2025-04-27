#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string st;
    while(n--)
    {
        cin>>st;
        if(st=="B"||st=="b")
            cout<<"BattleShip"<<endl;
        else if(st=="C"||st=="c")
            cout<<"Cruiser"<<endl;
        else if(st=="D"||st=="d")
            cout<<"Destroyer"<<endl;
        else if(st=="F"||st=="f")
            cout<<"Frigate"<<endl;
    }
    return 0;
}
