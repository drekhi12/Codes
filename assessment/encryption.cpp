#include<iostream>
#include<string>
using namespace std;
main(){
	string input, output;
	cin>>input;
	int k, l;
	cin>>k;
	int len= input.length();
	for(int i=0;i<len;i++){
		char a=input[i];
		int b=(int)a;
		if(b-k<65){
		 l=b-k+26;
		}
		else{
			 l=b-k;
		}
		output+=char(l);
	}
	cout<<output;
}
