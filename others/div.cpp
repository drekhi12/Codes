#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;((!(n%i)) && printf("%d is a divisor of %d\n",i)) || i<=(n/2);i++);//n is your number
}
