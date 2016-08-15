#include<iostream>
#include<string>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t>0)
	{	
	string a;
	cin>>a;
	int n=a.size();
	int anu=0;
	int mug=0;int flag=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{	
			if(a[i]==a[j]&&i!=j)
			{
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==0)
			{
				anu=(int)a[i];
				break;
			}
	}
		int count=0;
	for(int i=n-1;i>=0;i--)
	{	
		for(int j=n-1;j>=0;j--)
		{	
			if(a[i]==a[j]&&i!=j)
			{
				count=1;
				break;
			}
			else
			{
				count=0;
			}
		}
		if(count==0)
			{
				mug=(int)a[i];
				break;
			}
	}
	cout<<mug<<" "<<anu;
	if(anu>mug)
	cout<<"ABHINAV\n";
	else if(anu<mug)
	cout<<"MUGHDHA\n";
	else
	cout<<"TIE\n";
	t--;
}
}
