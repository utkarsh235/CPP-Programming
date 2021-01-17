#include <iostream>
using namespace std ;
int main ()
{
	int fish = 5;
	int *fishpointer ;
	fishpointer = &fish ;
	cout << fishpointer << endl;
	cout << &fish;
	return 0 ;
}
