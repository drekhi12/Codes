#include<iostream>
#include<string>
using namespace std;
int a,e,i,o,u;
char fun(char d);
main(){
	string x,y,z;
	cin>>x;
	cin>>a>>e>>i>>o>>u;
	y=x;
	cout<<"y is "<<y;
	int len=x.length();
	for(int i=0;i<len;i++){
		if(y[i]=='a'){
			a--;	
			if(a<0)
			goto here;		
		}
		else if(y[i]=='e'){
		e--;
		if(e<0)
			goto here;}
		else if(y[i]=='i'){
		i--;
		if(i<0)
			goto here;
		}
		else if(y[i]=='o'){
		o--;
		if(o<0)
			goto here;}
		else if(y[i]=='u'){
		u--;
		if(u<0)
			goto here;}
		else{
			here:
			z+=y[i];	
		}
			cout<<"yay";
	}
	len=z.length();
	char ret;
	for(int i=0;i<len;i++){
		ret=fun(z[i]);
		if(ret =='a'){
			a--;
		}
		if(ret =='e'){
			e--;
		}
		if(ret =='i'){
			i--;
		}
		if(ret =='o'){
			o--;
		}
		if(ret =='u'){
			u--;
		}
		z[i]=ret;
		
	}
}
char fun(char d)
{
	int b=(int)d;
	int test;
	char ret;
	int least=0;
	if(a!=0){
		least=b-97;
		ret='a';
	}
	if(e!=0){
		test=b-101;
		if(test<least){
		least=test;
		ret='e';
	}
	}
	if(i!=0){
		test=b-105;
		if(test<least){
		least=test;
		ret='i';
	}
	}
	if(o!=0){
		test=b-111;
		if(test<least){
		least=test;
		ret='o';
	}
	}
	if(u!=0){
		test=b-117;
		if(test<least){
		least=test;
		ret='u';
	}
	}
	return ret;
}
