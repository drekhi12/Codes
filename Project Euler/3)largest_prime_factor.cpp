#include<iostream>
using namespace std;
int prime(int n);
main(){
	int t;
	cin>>t;
	while(t--){
		int n,ans,fin;cin>>n;
		for(int i=3;i<n;i=i+2){
			 ans=prime(i);
			if(ans!=0&&n%i==0){
				fin=i;
			}
		}
		
		cout<<fin<<endl;
	}
}
int prime(int n){
	int fact=1;
	for(int i=3;i<n;i=i+2){
		if(n%i==0){
			fact=0;
			break;
		}
	}
	return fact;
}
