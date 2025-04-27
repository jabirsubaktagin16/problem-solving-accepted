#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,result;
    cin>>l>>r>>a;
    if(l==r)
    {
        result=2*r+a;
        if(result%2!=0)
            result=result-1;
    }
    else
    {
        int m = min(l,r);
        int d = abs(l-r);

        if(d>=a)
        {
            m = m+a;
            result = 2*m;
        }
        else
        {
            m = max(l,r);
            a = a-d;

            if(a%2!=0)
                a=a-1;
            result = 2*m+a;
        }
    }
    cout<<result<<endl;
    return 0;
}
