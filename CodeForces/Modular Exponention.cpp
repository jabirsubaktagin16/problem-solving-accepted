#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b;
    cin>>a;
    cin>>b;

    long sum=1;

    for(int i=0;i<a;i++){
        sum*=2;
        if(sum>b){
            cout<<b<<endl;
            return 0;
        }
    }
     cout<<b%sum<<endl;
     return 0;
}
