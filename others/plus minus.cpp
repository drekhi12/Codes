/*Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array.
A decimal representing of the fraction of negative numbers in the array.
A decimal representing of the fraction of zeroes in the array.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667*/
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int n;cin>>n;
	int a[n];int pos=0,neg=0,zero=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		{
			pos++;
		}
		else if(a[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	float p,ne,z;
	p=(float)pos/n;ne=(float)neg/n;z=(float)zero/n;
	//cout<<p<<endl<<ne<<endl<<z<<endl;
	std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << p<<endl<<ne<<endl<<z<<endl;
}
