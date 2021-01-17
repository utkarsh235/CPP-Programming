#include<iostream>
using namespace std ;
class table
{
	int a ,i ;
	
	public : 
	void get();
	
	void print()
{
	for (i=1 ; i <= 10; i++)
	{
	   cout << "\n" <<a << "x" << i <<"=" << a*i ;	
	}
}
	
} t;

void table :: get()
{
	cout << "enter the number of which you want to print table" ;
	cin >> a;
	
}

int main()
{
	t.get();
	t.print();
	return 0;
}
