#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    while (getline (cin,st))
    {
        for (int i=0; i<st.length(); i++)
        {
            if (st[i] == ' ')
                continue;
            cout << st[i];
        }
        cout<<endl;
    }
    return 0;
}
