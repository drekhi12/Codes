#include<iostream>
#include<cstring>
using namespace std;
main()
{
	int n;
	cout<<"Enter the number of bits\n";
	cin>>n;
	string a ;
	cout<<"Enter the string\n";
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
	c+=a;c+=b; count=0;
	cout<<"The sent message is : "<<c<<endl;
	len=c.size();
	c.erase(0,8);
	len=c.size();
	c.erase(len-8,8);
	len=c.size();
	//cout<<c<<endl;
	while(flag<=len)
	{
		flag=c.find("11111",count);
		if(flag>=0)
		{
			c.erase(flag+5,1);
			count=flag+6;
		}
		else
		{
			break;
		}
	}
	cout<<"The decoded message is : "<<c;	
}
