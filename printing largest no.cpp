#include <iostream>
using namespace std ;
class largest 
{
	int a , b ;
	
	public : 
		void getlargest(void);
		void printlargest(void);
		
};
void largest ::  getlargest(void)
{
	cout << "enter two no.'s";
	cin >> a >> b ;
	
}
void largest ::  printlargest(void)
{
	if (a>b)
	{
		cout << a << "is larger than" << b ;
		
	}
	else if (b>a)
	{
		cout << b << "is greater than " << a;
	}
}
int main ()
{
	largest l;
	 l.getlargest();
	 l.printlargest();
	return 0 ;
}


