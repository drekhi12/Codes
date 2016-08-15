#include<iostream>
#include<math.h>
using namespace std;
int prime(int k);
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	int n,sum=0,t;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
			t=prime(i);
			sum=sum+t;
	}
	cout<<sum<<endl;}
    return 0;
}
int prime(int k)
{
	int flag=0;int sum=0;
	for(int i=2;i<=sqrt(k);i++)
	{
		if(k%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	sum=sum+k;
	return sum;
}
