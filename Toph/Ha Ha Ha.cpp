#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,AB,AC,i=1;
    cin>>T;
    while(T--)
    {
        int BC=0;
        cin>>AB>>AC;
        BC=pow(AB,2)+pow(AC,2);
        cout<<"Case "<<i<<": "<<BC<<endl;
        i++;
    }
    return 0;
}
