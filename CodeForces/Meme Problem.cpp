#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    double n;
    while(T--)
    {
        cin>>n;
        double res=n*n-4*n;
        if(res<0)
            cout<<"N"<<endl;
        else{
            double a=(n+sqrt(res))/2;
            double b=(n-sqrt(res))/2;
            printf("Y %0.9f %0.9f\n",a,b);
        }
    }
    return 0;
}
