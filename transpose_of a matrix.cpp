#include<iostream>
using namespace std ;
int main()
{
	int i,j,n,m;
	cout << "enter the no. of rows of the matrix";
	cin >> n;
	cout << "enter the no. of coloumns of the matrix";
	cin >> m; 
	int a[i][j],t[j][i];
	cout << "enter the elements of the matrix";
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	cout <<" the matrix entered was ";
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cout << a[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	
	cout << "the transpose of the given matrix is " ;
    	
		for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			t[i][j]=a[j][i];
			cout << t[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
	return 0 ;
	
}

