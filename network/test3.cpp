#include<iostream>
using namespace std;
#include<cstring>
main()
{
	string a="DEEPANHU";
	int start;
	start=a.find("DEEPAN");
	a=a[start]+'S';
	cout<<a;
}
