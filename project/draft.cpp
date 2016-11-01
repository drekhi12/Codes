#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
using namespace std;
class AssignmentModel
{
	int matrix[10][10], matrix1[10][10], matrix2[10][10], rowzero[10], colzero[10], totalzero, row, col, roweliminate[10],coleliminate[10];
	int roweliminatenum, coleliminatenum, lines, n;
	public:
	AssignmentModel()
	{
		totalzero=0; row=0; col=0; roweliminatenum=0; coleliminatenum=0; lines=0; n=0;
	}
	void input();
	void print();
	void reduce();
	void zeroes();
	void cut();
	void eliminate();
	void optimal();
	void iterate();
	void assign();
	int calculate(int, int);
	void balance();
	void final();
};
int main()
{
	AssignmentModel a1;
	a1.input();
	getchar();
	return 0;
}
void AssignmentModel::input()
{
	cout<<"\nAssignment Problem\n";
	label:
    
	//cout<<"\nPress 1 to read values from file\nPress 2 to input values via keyboard\n";
	//int in;
	//cin>>in;
	//if(in==1)
	//{
		//change
	//}
	//else if(in==2){}
	//else
	//goto label;
	cout<<"\nEnter no. of people/machines(rows): ";
	cin>>row;
	cout<<"Enter no. of jobs(cols): ";
	cin>>col;

	//take input in the 2D array
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
	//check balanced or unbalanced
	
	if(row==col)
	{
		cout<<"\n\nBalanced problem\n";
		n=col;
	}
	else
	{
		cout<<"\n\nUnbalanced problem\n";
		//exit(0);
		this->balance();
	}
	//print input
	this->print();
	//call reduce function
	this->reduce();
}
//print function
void AssignmentModel::print()
{
	cout<<"\nElements of the matrix are-\n\n\t";
	
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<"\t";
	}
	for(int i=0; i<n; i++)
	{
		cout<<endl<<char(65+i)<<"\t";
		for(int j=0; j<n; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
	}
}
void AssignmentModel::balance()
{
    if(row>col)
    {
        int d=row-col;
        n=row;
        for(int i=col; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                matrix[j][i]=0;
            }
        }
    }
    else if(col>row)
    {
        int d=col-row;
        n=col;
        for(int i=row; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			matrix1[i][j]=matrix[i][j];
		}
	}
	this->print();
	this->reduce();
}
//reduction
void AssignmentModel::reduce()
{
	//row reduction
	
	cout<<"\n\nPerforming row reduction-\n";
	for(int i=0; i<n; i++)
	{
		int least=matrix[i][0];
		for (int j=0; j<n; j++)
		{
			if(matrix[i][j]<least)
			least=matrix[i][j];
		}
		for (int j=0; j<n; j++)
		{
			matrix[i][j]-=least;
		}
	}
	//print reduced row values
	this->print();
	
	//col reduction
	cout<<"\n\nPerforming column reduction-\n";
	for(int i=0; i<n; i++)
	{
		int least=matrix[0][i];
		for (int j=0; j<n; j++)
		{
			if(matrix[j][i]<least)
			least=matrix[j][i];
		}
		for (int j=0; j<n; j++)
		{
			matrix[j][i]-=least;
		}
	}
	//transfer reduced values to matrix2
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			matrix2[i][j]=matrix[i][j];
		}
	}
	//print reduced col values
	this->print();
	//call zeroes function to calculate no. of zeroes in each row and column
	this->zeroes();
}
//zeroes function
//====================================================================================================
void AssignmentModel::zeroes()
{
	//calculating zeroes in rows
	for(int i=0; i<n; i++)
	{
		int temp=0;
		for(int j=0; j<n; j++)
		{
			if(matrix[i][j]==0)
			temp++;
		}
		rowzero[i]=temp;
	}
	//calculating zeroes in cols
	for(int i=0; i<n; i++)
	{
		int temp=0;
		for(int j=0; j<n; j++)
		{
			if(matrix[j][i]==0)
			temp++;
		}
		colzero[i]=temp;
	}
	//printing matrix with no. of zeroes
	
	cout<<"\n\nValue of the matrix with no. of row and col zeroes\n\n\t";
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<"\t";
	}
	cout<<"0";
	for(int i=0; i<n;i++)
	{
		cout<<endl<<char(65+i)<<"\t";
		for(int j=0; j<n; j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<rowzero[i];
	}
	cout<<"\n0";
	//calculating total number of zeroes in matrix
	totalzero=0;
	for(int i=0; i<n; i++)
	{
		cout<<"\t"<<colzero[i];
		totalzero+=colzero[i];
	}
	cout<<"\t"<<totalzero;
	//cout<<"\ntotal zeroes are "<<totalzero<<endl;
	//cut function callto start cutting lines
	this->cut();
}
//cut function
//====================================================================================================
void AssignmentModel::cut()
{
	while(totalzero!=0)
	{
		this->eliminate();
	}
	if(totalzero==0)
	{
		this->optimal();
	}
}
//====================================================================================================
void AssignmentModel::eliminate()
{
	//calculating maximum number of zeroes in columns and rows
	int high=rowzero[0], flag=0, row=0, col=0;
	//cout<<"\nmaximum zeroes are "<<high<<endl;
	for(int i=0; i<n; i++)
	{
		if(rowzero[i]>high)
		{
			high=rowzero[i];flag=0;
			row=i;
		}
		if(colzero[i]>high)
		{
			high=colzero[i];flag=1;
			col=i;
		}
	}
	
	if(row>=col&&flag!=1)
	{
		roweliminate[roweliminatenum]=row;
		roweliminatenum++;
		goto a;
	}
	else
	{
		coleliminate[coleliminatenum]=col;
		coleliminatenum++;
		goto b;
	}
	a://if row is to eliminated
		for(int i=0; i<n; i++)
		{
			if(matrix[row][i]==0)
			matrix[row][i]--;
		}
		cout<<"\n\nrow "<<row+1<<" eliminated\n";
		lines++;
		goto c;
	b://if column is to be eliminated
		for(int i=0; i<n; i++)
		{
			if(matrix[i][col]==0)
			matrix[i][col]--;
		}
		cout<<"\n\ncol "<<col+1<<" eliminated\n";
		lines++;
	c:
		this->print();
		//calculate zeroes again after a line is eliminated
		this->zeroes();
}
//optimal function to check optimality
//====================================================================================================
void AssignmentModel::optimal()
{
    
	if(lines==n)
	{
		cout<<endl<<"lines= "<<lines<<endl;
		cout<<"\nOPTIMALITY ACHIEVED!\n";
		this->assign();
		this->final();
		exit(0);
	}
	else
	{
		cout<<"\nNOT AN OPTIMAL SOLUTION!\n";
		lines=0;
		//iterate if optimality not achieved
		this->iterate();
	}
}
//iterate function
//====================================================================================================
void AssignmentModel::iterate()
{
	int lines=0;
	//transfer matrix1 to matrix
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			matrix[i][j]=matrix2[i][j];
		}
	}
	//real iterate work
	int least=100;
	//obtaining least value from uncovered cells
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int flag=0;
			for(int k=0; k<roweliminatenum; k++)
			{
				if(i==roweliminate[k])
				{
					flag=1;
					break;
				}
			}
			for(int k=0; k<coleliminatenum; k++)
			{
				if(j==coleliminate[k])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				if(matrix[i][j]<least)
				{
					least=matrix[i][j];
				}
			}
		}
	}
	//least obtained out of uncovered cells
	//subtracting and adding least values
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int flag1=0, flag2=0;
			for(int k=0; k<roweliminatenum; k++)
			{
				if(i==roweliminate[k])
				{
					flag1=1;
					break;
				}
			}
			for(int k=0; k<coleliminatenum; k++)
			{
				if(j==coleliminate[k])
				{
					flag2=1;
					break;
				}
			}
			if(flag1==1&&flag2==1)
			{
				matrix[i][j]+=least;
			}
			else if(flag1==0&&flag2==0)
			{
				matrix[i][j]-=least;
			}
		}
	}
	//calculating zeroes in the new matrix formed
	this->zeroes();
}
//====================================================================================================
void AssignmentModel::assign()
{
	for(int i=0; i<n; i++)
	{
		int temp[10], count=0;
		for(int j=0; j<n; j++)
		{
			if(matrix[i][j]==-1)
			{
				temp[count]=this->calculate(i,j);
				count++;
			}
		}
		int least=100,k=0;
		while(k<count)
		{
			if(temp[k]<least)
			{
				least=temp[k];
				//cout<<"\nleast: "<<least<<endl;
			}
			k++;
		}
		int counter1=0;
		for(int l=0; l<n; l++)
		{
			if(matrix[i][l]==-1)
			{
				if(temp[counter1]==least)
				{
					matrix[i][l]++;
					for(int x=i;x<n;x++)
					{
						if(matrix[x][l]==-1)
						matrix[x][l]=-2;
					}
					for(int y=l;y<n;y++)
					{
						if(matrix[i][y]==-1)
						matrix[i][y]=-2;
					}
				}
				else
				{
					matrix[i][l]=-2;
				}
				counter1++;
			}
		}
	}
	this->print();
	getchar();
}
//====================================================================================================
int AssignmentModel::calculate(int l, int m)
{
	int temp=0;
	for(int i=l+1; i<n; i++)
	{
		if(matrix[i][m]==-1)
			temp++;
	}
	for(int j=0; j<n; j++)
	{
		if(matrix[l][j]==-1)
			temp++;
	}
	return temp;
}
//====================================================================================================
void AssignmentModel::final()
{
    cout<<"\n\nFinal assignments are-\n";
    int totaltime=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(matrix[i][j]==0)
            {
                cout<<char(i+65)<<" -> "<<j+1<<" time = "<<matrix1[i][j]<<endl;
                totaltime=totaltime+matrix1[i][j];
            }
        }
    }
    cout<<"\nTotaltime is "<<totaltime<<endl;
}
