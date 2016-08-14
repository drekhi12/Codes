#include<iostream>
#include <algorithm>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t>0){
	
	int n,x,y;
	cin>>n>>x>>y;
	int a[n];int xcount=0,ycount=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a, a + n);int per=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<2&&x>0)
		{
		xcount++;x--;per++;
	}
	else if(a[i]>=2&&(y>0||x>0))
	{
		while(a[i]>0&&y>0)
		{
		a[i]=a[i]-2;ycount++;
		y--;
		}
		while(a[i]>0&&x>0)
		{
			a[i]=a[i]-1;xcount++;
			x--;
		}
		per++;
	}
		
	}
	cout<<per<<endl;t--;
}
	
}
