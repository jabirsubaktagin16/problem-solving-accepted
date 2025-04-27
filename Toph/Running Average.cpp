#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum=0,i,n,a;
	float  val;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		sum=sum+a;
		val=(float)sum/i;
		printf("%f ",val);
	}
	return 0;
}