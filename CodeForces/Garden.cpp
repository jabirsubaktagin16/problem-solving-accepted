#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a];

    for(int i=0;i<a;i++)
        cin>>arr[i];
    sort(arr,arr+a);
    for(int i=a-1;i>=0;i--){
        if(b%arr[i]==0){
            cout<<b/arr[i]<<endl;
            break;
        }
    }
    return 0;
}
