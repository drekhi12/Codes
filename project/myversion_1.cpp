#include<iostream>
using namespace std;
int row,col;
int matrix[100][100];
void print();
main()
{
	cout<<"\nEnter no. of people/machines(rows): ";
	cin>>row;
	cout<<"Enter no. of jobs(cols): ";
	cin>>col;
	int matrix1[row][col];
	for(int i=0; i<row; i++)
	{
		cout<<"\nEnter for person/machine "<<char(65+i)<<endl;
		for(int j=0; j<col; j++)
		{
			cout<<"job "<<j+1<<": ";
			cin>>matrix[i][j];
			matrix1[i][j]=matrix[i][j];
		}
	}
	print();
	
}
void print(){
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
