#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)

int main()
{
    int T,cs=1;
    double R,area;
    cin>>T;
    while(T--)
    {
        cin>>R;
        area=0.0;
        area=((R+R)*(R+R))-(pi*R*R);
        printf("Case %d: %.2lf\n",cs,area);
        cs++;
    }
    return 0;
}
