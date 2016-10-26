#include<sstream>
#include<string>
#include<iostream>
using namespace std;
void check(unsigned long long int n);
int f=0;
main()
{
unsigned long long int x,y=1,mul;
cin>>x;
while(f!=1){
	mul=x*y;
	if(mul%4==0&&mul%10==0){
		check(mul);
	}
	else if(mul%4==0){
		check(mul);
	}
	y++;
}
check(x);
}
void check(unsigned long long int n)
{
	int flag=0;
stringstream ss;
ss << n;
string str = ss.str();
unsigned long long int len=str.size();
for(unsigned long long int i=0;i<len;i++){
	cout<<str;
	if(str[i]!='4'||str[i]!='0'){
		cout<<"jhgjhgj";
		flag=1;
		break;
	}
}
if(flag!=1)
{
	cout<<"yay"<<endl<<str;
}
system("pause");
}
