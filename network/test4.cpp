#include<iostream>
using namespace std;
#include<cstring>
main()
{
//	string a="HEL";
//	a.insert(3, "LO");
//	cout<<a;
	string a ="111110";
	int start;
	start=a.find("11111");
	//cout<<start;
	a.insert(6,"0");
	cout<<a;
}
