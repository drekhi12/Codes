#include<iostream>
#include<vector>
using namespace std;
main()
{	int t;
	cin>>t;
	while(t>0){
	int n;
	cin>>n;
	int a[n];int flag=0;
	vector<vector<int> >b(n,vector<int>(n)); 
	for(int i=0;i<n;i++)
	{
			cin>>a[i];
	}int j,r;
	for(int i=0;i<n;i++){
		j=n-1;
		while(a[i]>0)
		{
			r=a[i]%10;
			b[i][j]=r;
			a[i]=a[i]/10;
			j--;
		}
	}
//	cout<<"value of b00 is "<<b[0][0]<<endl;system("pause");
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;system("pause");
//	}
	if(n%2!=0)
	{
	for(int i=0;i<n/2;i++){
		int k=0;
		for(int j=n-1;j>n/2;j--){
			
			if(b[i][k]!=b[i][j])
			{
				cout<<"NO\n";flag=1;break;
			}
			k++;
		}
	}
	if(n%2!=0&&flag!=1){ int k=n-1;
		for(int i=0;i<n/2;i++)
		{	//cout<<"ghussa";
			if(b[i][n/2]!=b[k][n/2])
			{
				cout<<"NO\n";flag=1;break;
			}
			k--;
		}
	}
	for(int i=0;i<n/2;i++){
		int k=0;
		for(int j=n-1-i;j>n/2;j--){
			
			if(b[i][k]!=b[j][k])
			{
				cout<<"NO\n";flag=1;break;
			}
			k++;
		}
	}
	if(flag==0){
		cout<<"YES\n";
	}}
	else{
		
		
		//=========================================
//			for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<b[i][j]<<" ";
//		}
//		cout<<endl;system("pause");
//	}
		for(int i=0;i<n/2;i++){
		int k=0;
		for(int j=n-1;j>=n/2;j--){
			
			if(b[i][k]!=b[i][j])
			{
				cout<<"NO\n";flag=1;break;
			}
			k++;
		}
	}
	if(n%2!=0&&flag!=1){ int k=n-1;
		for(int i=0;i<n/2;i++)
		{	//cout<<"ghussa";
			if(b[i][n/2]!=b[k][n/2])
			{	
				cout<<"NO\n";flag=1;break;
			}
			k--;
		}
	}
	for(int i=0;i<n/2;i++){
		int k=0;
		for(int j=n-1-i;j>=n/2;j--){
			
			if(b[i][k]!=b[j][k])
			{	//cout<<"ghussa"<<i<<j<<k;
				cout<<"NO\n";flag=1;break;
			}
			k++;
		}
	}
	if(flag==0){
		cout<<"YES\n";
	}
	}
	t--;
}
}
