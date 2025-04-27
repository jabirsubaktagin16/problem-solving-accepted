#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    int T;
    char st[20];
    cin>>T;
    while (T--)
    {
        cin>>st;
        if (islower(st[0]))
            st[0] = toupper(st[0]);
        cout<<"Welcome "<<st<<endl;
    }
    return 0;
}
