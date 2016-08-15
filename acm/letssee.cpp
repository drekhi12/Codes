#include <string>
#include <stdio.h>
#include <stdlib.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;
int main()
{	long long int t;
 cin>>t;
 while(t>0){
    unsigned long long  int n;cin>>n;
     if(n<2)
         {
         cout<<n<<endl;
     }
     else{
         
     
long long int power=pow(10,n);
	string a[power];
         long long int counter=0;
         unsigned long long int d = pow(10,n);
	for(unsigned long long int i=1;i<power;i++)
	{
//	char l[d];
//	snprintf(l, sizeof(l), "%d", i);
//=======================================================================	
	std::stringstream a;
	a << i;
 std::string a = a.a[counter]();
 
// =======================================================================
//	a[counter].insert(0,l);
	counter++;
	}
	//cout<<a;
	long long int sum=0;
         long long int temp;
	for(long long int i=0;i<counter;i++)
	{
		temp=count(a[i].begin(),a[i].end(),'0');
		if(temp%2!=0)
		sum++;
	}
         cout<<sum+9;}
     t--;
 }
}

