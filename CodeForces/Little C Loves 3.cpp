#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    long long int a=1,b=1;
    n-=(a+b);

    if(n%3!=0)
        cout<<a<<" "<<b<<" "<<n<<endl;
    else
    {
        a++;
        n--;
        cout<<a<<" "<<b<<" "<<n<<endl;
    }
    return 0;
}
