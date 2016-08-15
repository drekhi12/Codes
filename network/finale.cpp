#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the number of bits\n";
	cin>>n;
	char a[n];
	cout<<"Enter the string\n";
	cin>>a;
	string b="01111110";
	int flag=1,counter=8;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='1'&&flag>=1)
		{
			if(flag==6)
			{
				b+='0';
			}
			b+=a[i];
			flag++;
		}
		else
			{
				b+=a[i];
				flag=1;
			}
	}
	b+="01111110"; 
	cout<<"The sent message is : "<<b<<endl;
}
