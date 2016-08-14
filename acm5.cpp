#include<iostream>
using namespace std;
#include<cstring>
#include<algorithm>
int main()
{
	int t;
	cin>>t;
	while(t>0){

	int n;
	cin>>n;
	string a,b;
	while(n>0)
	{
		cin>>b;
		a+=b;	
		n--;
	}
	b.clear();
	int len=a.size();
	int j=len-1;int count=0;
	for(int i=0;i<len/2;i++)
	{
		if(a[i]==a[j]){
		}
		//cout<<a[i]<<endl;
		else
		{
			if(a[i]==a[j-1])
			{
			a.erase(j);
			count++;
			len--;
		}
			else
			{
			a.erase(i);
			count++;len--;
		}
		}
		j--;
	}
	cout<<count<<endl;t--;
}
}
