#include <iostream>
using namespace std ;
class largest 
{
	int a , b , large ,c ;
	
	public : 
	   void getno();
	   void printno();
	   
};
void largest :: getno()
{
	cout << "enter three no";
	cin >> a;
	cin >> b;
	cin >> c;
}
void largest :: printno()
{
	if (a >b && a > c)
	{
		cout << a << "is the  largest no.";
		
	}
	if (b > a && b > c)
	{
		cout << b << "is the  largest no.";
		
	}if (c > a && c >b)
	{
		cout << c << "is the  largest no.";
		
	}
}
int main ()
{
	largest l;
	l.getno();
	l.printno();
	return 0 ;
}
