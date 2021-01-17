#include <iostream>
using namespace std ;
class swap 
{
	int x,y, temp  ;
	
	public :
	void change(int &x, int &y );
		void print();
		
		
};

void swap :: change(int &a,int &b)
{
	cout << "enter the values of a and b";
	cin >> a >> b ;
	temp = a ;
	a = b ;
	b = temp;
}
void swap :: print()
{
	cout << "the new values of a and b are\n";
	
	cout <<"a ="<< x;
	cout << "b =" << y ;
	 
}
 int main ()
 {
 	class swap s ;
 	s.change(int &x,int &y);
 	s.print();
 	cout << x << y;
 	return 0 ;
 }
