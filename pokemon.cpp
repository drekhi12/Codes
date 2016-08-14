#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],ty;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
        if(a[i]==0)
            {ty=0;}
	}
    if(ty==0)
        {
        exit(1);
    }
   
	sort(a,a+n);
	long long int count=0;long long int c[n];long long int d=0;
	for(long long int i=0;i<n;i=i+count)
	{	count=0;
		for(long long int k=i;k<n;k++)
		{
			if(a[i]==a[k])
			{
				count++;
			}
		}
		if(count>0)
		{
			c[d]=count;
			d++;
		}
	}
	sort(c,c+d);
	long long int pika=c[d-1];
	if(pika>=12)
	{
		long long int q=pika/12;long long int r=pika%12;
		cout<<"Pidgy-"<<r<<endl;
		cout<<"Pidgeotto-"<<q<<endl;
	}
	else{
		cout<<"Pidgy-"<<pika<<endl;
		cout<<"Pidgeotto-0\n";
	}
}
