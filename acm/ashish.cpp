#include<iostream>
using namespace std;
main()
{
	long long int n;
	cin>>n;
	long long int m[n],p[n],count=0;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(m[i]>p[j])
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
}
