#include<iostream>
using namespace std;
int main()
{
	long long int n,t;
	cin>>t;
	while(t>0){
	
	cin>>n;
	long long int m,r,count=0;
	m=n;
	while(n>0){
		r=n%10;
		if(r!=0&&m%r==0){
			count++;
		}
		n=n/10;
	}
	cout<<count<<endl;
	t--;
}
}
