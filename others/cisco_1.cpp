#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	int a[x][y];
	int sum=0,flag=1;
	for(int i=0;i<=x;i++){
		for(int j=0;j<=n;j++){
			if(i==x&&j==y){
				break;}
			else if(x%2==0){
				sum++;
			}
			else{
				if(i==x){
					break;
				}
				else{
				sum++;
				cout<<"value of x is "<<i<<" and value of y is "<<j<<endl;
				flag=0;}
			}
			
		}
	}
	if (flag==0)
	cout<<sum+n-y;
	else
	cout<<sum;
}
