#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k,t,a=0;
    cin>>n>>k;
  	while(n--)
  	  {
  	  	cin>>t;
  	  	if(t%k==0)
  	  	 a++;
		}
	cout<<a<<endl;
	return 0;
}
