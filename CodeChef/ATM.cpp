#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    double b;
    cin>>a>>b;
    if(a%5==0 && (a+0.5)<=b)
        b-=(a+0.5);
    printf("%.2f\n",b);
    return 0;
}
