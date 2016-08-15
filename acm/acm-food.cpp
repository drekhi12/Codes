#include<iostream>
#include<string>
using namespace std;
int main()
{	int t;
cin>>t;
while(t>0)
{
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		if(i*i<=n)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	int flag=1;
	if(count%2==0)
	cout<<"LOSER\n";
	else{
	for(int i=3;i<count;i=i+2)
	{
		if(count%i==0)
		{	
			cout<<"LOSER\n";flag=0;
			break;
		}
		else
		flag=1;
	}
	if(flag==1)
	cout<<"WINNER\n";
}t--;
}
}
