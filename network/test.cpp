#include<iostream>
using namespace std;
#include<cstring>
main()
{
	char *output=NULL;
	char a[]="Hello";
	char b[]="Hello";
	output=strstr(a,b);
	if(output){
		cout<<"string found";
	}
}
