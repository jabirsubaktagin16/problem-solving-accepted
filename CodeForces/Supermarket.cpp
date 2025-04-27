#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    double a,b;
    double minimum=INT_MAX;
    cin>>n>>m;
    while(n--)
    {
        cin>>a>>b;
        minimum=min(minimum,(a/b));
    }
    printf("%.8lf\n",minimum*m);
    return 0;
}
