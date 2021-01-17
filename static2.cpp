#include<iostream>
using namespace std ;
int main ()
{
	int x ;
	static int y ;
	cout << sizeof(x) << "\n";
	cout << sizeof(y) << "\n";
	return 0 ;
}
