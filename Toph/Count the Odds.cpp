#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a%2==0)
            a++;
        if(b%2==0)
            b--;
        if(a>b)
        {
            printf("0\n");
            continue;
        }
        int temp=b-a;
        temp=temp/2;
        temp++;
        cout<<temp<<endl;
    }
    return 0;
}
