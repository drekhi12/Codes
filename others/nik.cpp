#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
	int n;
	cin>>n;
	//int a[n];int b[n];
	vector<int> a (n);vector<int> b (n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	b=a;
	int large=0;
	sort (b.begin(), b.begin()+n);
	large=b[n-1];
	int index;
	for(int i=0;i<n;i++)
	{
		if(a[i]==large){
			index=i;
			break;
		}
	}
	int diff=0,flag=1;
	for(int i=0;i<index;i++){
		if(diff<large-a[i]){
			diff=large-a[i];
		}
		else if(diff==0){
			flag=0;
			cout<<"-1\n";
			break;
		}
	}
	if(flag!=0)
	cout<<diff<<endl;
	
}
