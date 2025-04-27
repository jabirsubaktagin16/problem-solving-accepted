#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int button=n;
    int a=n-1;

    for(int i=1;i<n;i++){
        button+=a+(a-1)*i;
        a--;
    }
    cout<<button;
    return 0;
}
