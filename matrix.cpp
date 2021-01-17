#include<iostream>
using namespace std ;
class matrix
{
	int a,b,c,i,n;
	int arr[50][50];
	
	public :
		void getdetails();
		void print();
};
void matrix :: getdetails()
{
	cout << "enter the no. of rows and columns of a matrix";
	cin >> a  >> b ;
	 int arr[a][b];
	
	cout << "enter the elements of the matrix";
	for(i=0 ; i< a ; i++)
	{
		for (n=0; n < b; n++)
		{
			cin >> arr[i][n];
		}
	}
}
void matrix :: print()
{
	cout << "the entered matrix is :\n";
	for(i=0 ; i< a ; i++)
	{
		for (n=0; n < b; n++)
		{
			cout << arr[i][n];
			cout << "\t";
		}
		cout << "\n";
	}
}
int main ()
{
	matrix m;
	m.getdetails();
	m.print();
	return 0;
}
