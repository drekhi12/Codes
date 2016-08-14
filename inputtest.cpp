#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
main()
{
	int n,num,counter=0,test;
	cout<<"Enter how many numbers you want to enter\n";
	cin>>n;
	vector<vector<int> >a(100,vector<int>(5,-1));
	cout<<"Enter the numbers\n";
	for(int i=0;i<n;i++)
	{
		cin>>num;
		system("pause");
		if(a[num][0]==-1&&num>0)
		{
			a[num][0]=num;
		}
		else if(num<0)
		{
			test=abs(num);
			cout<<"value of num is "<<test<<endl;system("pause");
			if(a[num][2]==-1)
			{
				a[num][2]++;
			}
		}
		else
		{
			a[num][1]++;
		}
	}
	cout<<"The sorted elements are\n";
	for(int i=0;i<100;i++)
	{
		if(a[i][0]!=-1)
		{
			for(int d=0;d<=a[i][1];d++)
				{
					cout<<a[i][0]<<endl;
					counter++;
				}
		}
		else if(a[i][2]!=-1)
		{
			for(int d=0;d<=a[i][2];d++)
			{
				cout<<-a[i][2]<<endl;
				counter++;
			}
		}
		if(counter==n)
		{
			exit(1);
		}
	}
}
