#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	long long int n;
	cin>>n;
	long long int three,five,fifteen;
	three=(n-1)/3;
	five=(n-1)/5;
	fifteen=(n-1)/15;
	cout<<(3*three*(three+1)/2)+(5*five*(five+1)/2)-(15*fifteen*(fifteen+1)/2)<<endl;
}
}
