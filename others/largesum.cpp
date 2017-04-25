#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	int carry=0;
	int res[100];
	int count=0;
	int sum=0;
	for(int i=49;i>=0;i--){
		sum =0;
		for(int j=0;j<n;j++){
			sum += (str[j][i]-'0');
		}
		sum = sum + carry;
		carry = sum/10;
		sum = sum%10;
		res[count]= sum;
		count++;
	}
	res[count]= carry;
	for(int i=count;i>count-10;i--){
		cout<<res[i];
	}
}