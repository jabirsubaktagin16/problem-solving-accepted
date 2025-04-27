#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        int A[N+1],B[N+1];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<N;i++)
            cin>>B[i];
        long long int result,maximum=0;
        for(int i=0;i<N;i++)
        {
           result=20*A[i]-10*B[i];
           if(result<0)
            result=0;
           if(result>=maximum)
            maximum=result;
        }
        cout<<maximum<<'\n';
    }
    return 0;
}
