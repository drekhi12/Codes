#include<iostream>
using namespace std;
#include<string>
int main()
{
	int t;
	cin>>t;
	while(t>0){
	string a,b;
	cin>>a>>b;
	int len=a.length();
	if(a.length()==b.length() && a.compare(b)==0){
		cout<<"YES\n";
	}
	else if(a.length()<b.length()||(a.length()==b.length()&& a.compare(b)!=0)){
		cout<<"NO\n";
	}
	
	else{
        int k=0,flag=1;
		for(int i=0;i<len;i++){
            if(a[i]==b[k++]){
                
            }
             else if(a[i-1]==a[i])
            {
                a.erase (a.begin()+i);
				//len--;
				
			}
            
		}
		if(a==b){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
        cout<<a;
	t--;}
	
}
