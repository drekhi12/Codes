#include<iostream>
#include<algorithm>
using namespace std;
long long int fun(long long int a,long long int arr[],long long int n);
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	for(long long int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long int k=0; long long int r[n];
	for(long long int i=0;i<n;i++){
		for(long long int j=i+1;j<n;j++){
			r[k]=arr[i]*arr[j];
			k++;
		}
	}
	sort(r,r+k);
	long long int p,ans;
	for(long long int i=k-1;i>=0;i--){
		p=fun(r[i],arr,n);
		if(p==1){
			ans=r[i];
			break;
		}
	}
	cout<<ans;
}
long long int fun(long long int a,long long int arr[],long long int n){
	long long int flag=0;
	for(long long int i=0;i<n;i++){
		if(a==arr[i]){
			flag=1;
			break;
		}
	}
	return flag;
}
