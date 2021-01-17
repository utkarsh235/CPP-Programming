#include <iostream>
using namespace std ;
class swap
{
	int a, b ,  temp;
	int x = &a;
	int y = &b ;
	
	public:
	void change();
	void print();
};
void class :: void change()
{
	cout << "enter the values of a and b ";
	cin >> a >>b ;
	cout << "the value of a and b entered was " << a << b;
	
	temp = x;
	x = y ;
	y = temp;
}
void class :: void print()
{
	cout << "the new values of a and b are" << a  <<b ;
	
}
int main ()
{
	swap s;
	s.change();
	s.print();
	return 0 ;
}
