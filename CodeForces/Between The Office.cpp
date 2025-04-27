#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i]=='S'&&arr[i+1]=='F')
            count1++;
        else if(arr[i]=='F'&&arr[i+1]=='S')
            count2++;
    }
    if(count1>count2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
