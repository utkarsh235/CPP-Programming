#include<iostream>
int fact (int);
using namespace std ;
int main ()
{
	int a,b,c,i,n;
	
	cout << "enter the number whose factorial you wanna calculate";
	
	cin >> a;
	
	n = fact (a);
	
	cout << "the factorial of" << a << "is" << n;
	
	return 0;
	
	
}
int fact (int x)
{
	int multi;
	if ( x == 0 || x ==1 )
	{
		multi = 1;
	}
	if (x != 1)
	{
	
	multi = x * fact(x-1);
}
	return multi;
}
