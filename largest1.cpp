#include<iostream>
using namespace std ;
class largest
{
	int a,b,c,i,n ;
	
	public :
		void getnumber();
		void logic();
}l;
void largest :: getnumber()
{
	cout << "enter three numbers" ;
	cin >>a;
	cin >>b;
	cin >>c;
}
void largest :: logic()
{
	if (a>b && a>c)
	{
		cout << a << "is largest ";
	}
	if (b>a && b>c)
	{
		cout << b << "is largest ";
	}
	if (c>a && c>b)
	{
		cout << c << "is largest ";
	}
}
int main ()
{
	l.getnumber();
	l.logic();
	return 0 ;
}











