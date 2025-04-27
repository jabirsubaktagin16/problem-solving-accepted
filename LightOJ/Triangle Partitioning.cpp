#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=0;
    cin>>T;
    while(T--)
    {
        double ab,ac,bc,ade;
        cin>>ab>>ac>>bc>>ade;
        printf("Case %d: %.10lf\n",++cs,sqrt(ade/(ade+1))*ab);
    }
    return 0;
}
