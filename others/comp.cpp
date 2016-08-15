#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	int test,count=0,flag=0,ant;
	test=a[0][0];ant=test;
	for(int i=0;i<n-1;i++)
	{
		if(test==a[i+1][0])
		{
			count++;
		}
		if(ant==a[0][i+1])
		{
			flag++;
		}
	}
	if(count==n-1)
	{
		cout<<"YES";
	}
	else if(flag==n-1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
