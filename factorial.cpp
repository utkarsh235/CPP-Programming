#include<iostream>
using namespace  std ;
class factorial
{
	int a, b , i;
	int fact ;
	public :
		void number();
		void printnumber();
};
void factorial ::  number()
{
	cout << "enter a num whose facto u want";
	cin >> a;
	
}
void factorial :: printnumber()
{
	fact = 1 ;
	for (i=a;i>=1;i--)
	{
		fact = fact * i;
	}
	cout << "the facto of entered num is" << fact ;
}
int main ()
{
	factorial f;
	f.number() ;
	f.printnumber();
	return 0;
}
