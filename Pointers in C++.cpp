#include <iostream>
using namespace std ;
int main ()
{
	int a = 5 ;
	int *u ;
	u = &a ;
	cout << "The Address of 'a' or the value of 'u' is " << u << "\n";
	cout << "The Address of 'a' or the value of 'u' is " << &a ;
	return 0;
}
