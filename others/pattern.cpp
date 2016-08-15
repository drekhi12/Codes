/*Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .*/
#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i;j>0;j--)
		cout<<" ";
		int k=n-i;
		for(int l=0;l<k;l++)
		cout<<"#";
		cout<<endl;
	}
}
