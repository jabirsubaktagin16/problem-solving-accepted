#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,D,N,sum;
    cin>>T;
    while(T--)
    {
        cin>>D>>N;
        sum=0;
        while(D--)
        {
            while(N)
            {
                sum+=N;
                N--;
            }
            N=sum;
            sum=0;
        }
        cout<<N<<endl;
    }
    return 0;
}
