#include<iostream>
#include<algorithm>
using namespace std;
#include<cstring>
int main()
{
	int t;
	cin>>t;
	while(t>0&&t<10){
	string a,b;
	cin>>a;
	cin>>b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	int len=0;
	int s=0;
	s= a.size();
	cout<<s<<endl;
	len=b.size();
	int co=0;
	int check=0;
	for(int i=0;i<len;i++){
		for(int j=co;j<a.size();j++){
			if(a[j]==b[i]){
				co=j;
				co++;
				check++;
				break;
			}
		}
	}
	if(check==len){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	t--;
}
}
