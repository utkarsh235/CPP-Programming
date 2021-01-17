#include<iostream>
using namespace std ;
int main ()
{
	int a , b , temp ;
	int *u, *t ;
	cout << "enter the values of a and b "<< endl;
	cin >>a ;
	cin >> b;
	u = &a;
	t = &b;
	temp = *u;
	*u = *t ;
	*t = temp;
	cout << "the new values of a and b are ";
	cout << a << "\n" << b;
	return 0 ;
}
