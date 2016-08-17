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
	//b.clear();
       cout<<a<<endl;
	int len=a.size();
	cout<<len<<endl;
	int j=len-1;int count=0;
        int cal=len/2;
	for(int i=0;i<cal;i++)
	{
		if(a[i]==a[j]){
		}
		//cout<<a[i]<<endl;
		else
		{
			if(a[i]==a[j-1])
			{
               // cout<<a[j];
			a.erase(j);
			count++;
			cal--;
		}
			else
			{//cout<<a[i];
			a.erase(i);
			count++;cal--;
		}
		}
		j--;
	}//cout<<endl<<a;
	cout<<count<<endl;t--;
}
}
