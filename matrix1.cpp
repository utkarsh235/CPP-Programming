#include<iostream>
using namespace std ;
int main()
{
	int a,b,c,i,n, arr[15][15],m;
	
	cout << "enter the value of m and n where m is rows and n is coloumns of a matrix";
	cin >> m >> n;
	
	cout << "enter the values in matrix";
	for (i = 0 ; i<m ; i++)
	{
		for (a = 0 ; a< n ; a++)
		{
			cin >> arr[i][a];
		}
	}
	
	cout << "the matrix entered was\n";
	for (i = 0 ; i<m ; i++)
	{
		for (a = 0 ; a< n ; a++)
		{
			cout << arr[i][a];
			cout << "\t";
		}
		cout << "\n";
	}
	return 0; 
}
