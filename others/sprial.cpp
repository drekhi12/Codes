#include<iostream>
using namespace std;
main(){

int row,col;
cin>>row>>col;
int a[row][col];

for(int i=0;i<row;i++){
	for(int j=0;j<col;j++){
		cin>>a[i][j];
	}
}

int counter=0;
int flag=0;
int count=0;
while(count<row*col){
	for(int i=counter;i<col-1;i++){
	cout<<a[counter][i];
	count++;
}
counter++;
for(int i= flag;i<row;i++){
	cout<<a[]
}
col--;
}




}
