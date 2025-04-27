#include <iostream>
using namespace std;

int main() {

   int t;
    cin>>t;
    while(t)
        {
        char a[10000];
        cin>>a;
        int i=0;
        while(a[i]!='\0')
        {if(i%2==0)
            cout<<a[i];
        i++;}
       i=0;
        cout<<" ";
        while(a[i]!='\0')
        {if(i%2!=0)
            cout<<a[i];
        i++;}
        t--;
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
