#include<iostream>
using namespace std ;
class charactar 
{
	int a ;
	char c;
	
	public :
		void ascii(void);
		void printascii(void);
		
};

void charactar :: ascii()
{
	cout << "enter a charactar";
	cin >> c;
	a = c ;
	
}
void charactar :: printascii()
{
	cout << "the ascii value of entered charactar is "  << a;
}

int main ()
{
	charactar s;
	
	s.ascii();
	s.printascii();
	return 0;
}


