#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n],apple_100=0,apple_200=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==100)
            apple_100++;
        else if(arr[i]==200)
            apple_200++;
    }
    apple_200=(apple_200%2);
    apple_100=apple_100-2*apple_200;
    if(apple_100%2==0 && apple_100>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
