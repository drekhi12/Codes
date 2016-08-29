#include<iostream>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	int count=0;int flag=0;
	for(int i=l;i<=r;i++)
	{
		if(i%2!=0){
		for(int j=3;j<i;j=j+2)
		{
			if(i%j==0){
				flag=1;
				break;
			}
			else{
				flag=0;
			}
		}
		if(flag==0){
			
			int r;int n=i,t=0;
			while(n>0){
				r=n%10;
				t=t*10+r;
				n=n/10;
			}
			if(t==i){
				count++;
			}
		}
	}
	}
	cout<<count;
	
}
