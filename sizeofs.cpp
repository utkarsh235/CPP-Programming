#include<iostream>
using namespace std ;
class size 
{
	int i ;
	float  f;
	char c[3];
	long l;
	double d;
	
	public :
		void print();
}s;
void size :: print()
{
	cout << "\nthe size of i is" << sizeof(i);
	cout << "\nthe size of f is" << sizeof(f);
	cout << "\nthe size of c is" << sizeof(c);
	cout << "\nthe size of l is" << sizeof(l);
	cout << "\nthe size of d is" << sizeof(d);
}

int main ()
{
	s.print();
	return 0 ;
}
