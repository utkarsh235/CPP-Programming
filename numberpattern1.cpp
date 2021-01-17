#include <iostream>
using namespace std ;
int main ()
{
	int a , b , i ,n ;
	cout << "enter the no. of rows and coloums of no.'s you want  ";
	cin >> a ;
	b = a ;
	for (i =1 ; i<= a ; i++)
	{
		for (b = 1 ;b<= i; b++)
		{
			cout << i ;
		}
		cout << "\n ";
	}
	return 0 ;
	
}
