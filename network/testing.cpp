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
		count=a.find("11111",count);
		if(count>=0)
		{
		a.insert(count+5,"0");
		count=count+7;
		}
		else
		{
			break;
		}
	}
	c+=a;c+=b; 
	cout<<"The sent message is : "<<c<<endl;
	len=c.size();
	c.erase(0,8);
	len=c.size();
	c.erase(len-8,8);
	cout<<c;
	
}
