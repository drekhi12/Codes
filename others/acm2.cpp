#include<iostream>
using namespace std;
int rev(int n);
main()
{
	int in,t;
	cin>>in;
	while(in>0){
	int n;
	cin>>n;
	t=n+1;
	do{
	t=	rev(t);
	}
while(t>10);
cout<<t<<endl;
in--;}
}
rev(int n){
	int t=0,r;
	while(n>0)
	{
		r=n%10;
		t=t+r;
		n=n/10;
	}
	return t;
}
