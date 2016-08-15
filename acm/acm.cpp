#include<iostream>
#include<cstring>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t>0)
	{
	
	int n;
//	cout<<"Enter the number of bits\n";
	
	string a ;
	n=a.size();
//	cout<<"Enter the string\n";
	cin>>a;
	string b="01111110";string c;
	c+=b;
	int flag=0;int count=0;int len;
	while(count<=n)
	{
		count=a.find("011111",count);
		if(count>=0)
		{
		a.insert(count+6,"0");
		count=count+8;
		}
		else
		{	
			break;
		}
	}
	c+=a;c+=b; 
	cout<<c<<endl;
	t--;
}
}
