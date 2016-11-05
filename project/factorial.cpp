#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	unsigned long long int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<fact;
}
