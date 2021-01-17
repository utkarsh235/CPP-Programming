#include <iostream>
using namespace std ;
class fact 
{ int a ,b ,f = 1,i ;

public :
	void getnumber();
	void logic();
	void printfactorial();
};
void fact :: getnumber()
{
	cout << "enter the number whose factorial you want to calculate";
	cin >> a;
	
}
void fact :: logic()
{
	for (i=a;i>=1;i--)
	{
		f = f * i;
	}
}
void fact :: printfactorial()
{
	cout << "the factorial of" << a << " is " << f ;
}

int main()
{
  fact fa;
  	 fa.getnumber();
	 fa.logic();
	 fa.printfactorial();
	 return 0;
}
