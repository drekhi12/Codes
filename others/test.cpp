#include<string>
#include<iostream>
using namespace std;
main()
{
	int flag=0;
	string str;
	cin>>str;
	int len =str.size();
	for(unsigned long long int i=0;i<len;i++){
		cout<<str[i];
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
}
