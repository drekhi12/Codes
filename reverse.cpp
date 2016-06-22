#include<iostream>
using namespace std;
int pallin(int p);
int main()
{
	int u;
	cin>>u;
	for(int i=0;i<u;i++)
	{
	int n,t,sum,u;int count=0;
	cin>>n;int k,r,flag;
	for(int i=0;i<n;i++)
	{	flag=0;
		t=pallin(i);
		sum=i+t;
		k=sum;
		while(k>0)
		{
		r=k%10;
		if(r%2==0)
		{
			flag=1;break;
		}
		k=k/10;
		}
		if(flag!=1 && i%10!=0)
		{
		count++;
		}
	}
	cout<<count<<endl;
}
return 0;
}
int pallin(int p)
{
	int r,t=0;
	while(p>0)
	{
		r=p%10;
		t=t*10+r;
		p=p/10;
	}
	return t;
}
