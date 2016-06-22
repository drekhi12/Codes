#include<iostream>
using namespace std;
int pallin(int p);
int main()
{
	 int n,num;
	cin>>n;
	int a[n],j=0;
	for(int i=101101;i<=1000000;i++)
	{
		num=pallin(i);
		if(num==i)
		{
			a[j]=num;
			j++;
		}
	}
	for(int i=0;i<j;i++)
	cout<<a[i]<<endl;
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
