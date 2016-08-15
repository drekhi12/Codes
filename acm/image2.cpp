#include<iostream>
#include<vector>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t>0&&t<11){
	long long int n;
	cin>>n;
	if(n<=1&&n>=33)
	exit(1);
	vector<long long int>a(n);
	long long int flag=0;
	vector<vector<long long int> >b(n,vector<long long int>(n)); 
	for(long long int i=0;i<n;i++)
	{
			cin>>a[i];
	}
	long long int j,r;
	for(long long int i=0;i<n;i++){
		j=n-1;
		while(a[i]>0)
		{
			r=a[i]%10;
			if(r>1)
			exit(1);
			b[i][j]=r;
			a[i]=a[i]/10;
			j--;
		}
	}

	if(n%2==0)
	{	long long int k,flag=0;long long int fl=0;
		for(long long int i=0;i<n;i++)
		{	k=0;
			for(long long int j=n-1;j>=n/2;j--)
			{
				if(b[i][k]!=b[i][j]){
					//cout<<"yeh";
					cout<<"NO\n";flag=1;
					break;
				}
				k++;
			}
			if(flag==1)break;
		}
		if(flag!=1)
		{	long long int k=n-1; fl=0;
			for(long long int i=0;i<n/2;i++){
				for(long long int j=0;j<n/2;j++){
					if(b[i][j]!=b[k][j]){
						//cout<<"vo";
						cout<<"NO\n";fl=1;break;
					}
				}
				k--;
			}
			if(fl!=1){
			//cout<<"kya";
			cout<<"YES\n";
		}
		}
		
	}
	
	else{
		long long int k,flag=0;long long int fl=0;
		for(long long int i=0;i<n;i++)
		{	k=0;
			for(long long int j=n-1;j>n/2;j--)
			{
				if(b[i][k]!=b[i][j]){
					//cout<<"yeh";
					cout<<"NO\n";flag=1;
					break;
				}
				k++;
			}
			if(flag==1)break;
		}
		if(flag!=1)
		{	long long int k=n-1; fl=0;
			for(long long int i=0;i<=n/2;i++){
				for(long long int j=0;j<=n/2;j++){
					if(b[i][j]!=b[k][j]){
						//cout<<"vo";
						cout<<"NO\n";fl=1;break;
					}
				}
				k--;
			}
			if(fl!=1){
			//cout<<"kya";
			cout<<"YES\n";
		}
		}
	}
	
	t--;
}
}
