#include<iostream>
using namespace std;
matrix(int m, int n)
{
	int arr[m][n];
	cout << "enter the matrix";
	for(n=1;n<=3;n++)
	{
		for (m=1;m<=3;m++)
		{
			cin >> arr[m][n];
		}
	}
	cout << "\n" << "the matrix that you entered is ";
	for(n=1;n<=3;n++)
	{
		for (m=1;m<=3;m++)
		{
			cout << arr[m][n]; cout << "\t";
		}cout << "\n";
    }
}
int main()
{
	int m,n;
	cout << "enter the rows and coloumns of the matrix";
	cin >> m >> n;
	matrix(m,n);
	return 0;
}
