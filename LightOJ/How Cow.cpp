#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    while(T--)
    {
        int x1,y1,x2,y2;
        printf("Case %d:\n",cs);
        cin>>x1>>y1>>x2>>y2;
        int M,E,F;
        cin>>M;
        while(M--)
        {
            cin>>E>>F;
            if(((E>=x1)&&(E<=x2))&&((F>=y1)&&(F<=y2)))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        cs++;
    }
    return 0;
}
