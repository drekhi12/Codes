#include<iostream>
#include<string>
using namespace std;
unsigned long long int four=0,zero=0,count=0;void rev(unsigned long long int n);
main()
{	
	int x;
	cin>>x;
	unsigned long long int mul,i=1;
	while(four<=0||zero<=0){
		mul=i*x;
	 	if(mul%10==0&&mul%4==0){
	 		rev(mul);
		 }		
		else if(mul%4==0){
			rev(mul);
		}
		i++;
	}
	//cout<<2*four+zero<<endl;
}
void rev(unsigned long long int n)
{	unsigned long long int test=n;
	unsigned long long int r,flag=0,fla=0,f=0;
	unsigned long long int zer=0,fr=0;
	while(n>0){
		r=n%10;
		if(r==4||r==0){
		
		if(r==4){
			
			fr++;flag++;
		}
		else if(r==0&&flag!=1){
			if(fr>0){f=1;break;
			}
			zer++;
		}
	}
		else{f=1;break;
		}
		n=n/10;
		}
		if(f==0){
			four=fr;
			zero=zer;
			count++;
			cout<<test<<endl;
			//cout<<fr<<endl<<zer<<endl;
			system("pause");
		}
}

