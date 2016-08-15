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
				
				b[counter]='0';
				cout<<b[counter];system("pause");
				counter++;
			}
			b[counter]=a[i];
			cout<<b[counter];system("pause");
			counter++;
			flag++;
		}
		else
			{
				
				cout<<"ghussa\n";
				b[counter]=a[i];
				counter++;
				flag=1;
			}
	}
	b[counter]='0';counter++;
	b[counter]='1';counter++;
	b[counter]='1';counter++;
	b[counter]='1';counter++;
	b[counter]='1';counter++;
	b[counter]='1';counter++;
	b[counter]='1';counter++;
	b[counter]='0';counter++;
	cout<<"The sent message is"<<endl;
	for(int i=0;i<counter;i++)
	{
		cout<<b[i];
	}
}
