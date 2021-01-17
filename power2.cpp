#include<iostream>
using namespace std ;
int power(int , int);
int main ()
{
	int a,b,c,i,n;
	
	cout << "enter the number and its power to be calculated ";
	cin >> a >> b;
	n = power (a,b);
	cout << a << "to the power" << b << "is" << n;
	
	return 0;
	
}
int power (int x, int y )
{
	if (y != 0)
	{
	
	
	return x * power(x , y-1);
    }
	else 
	{
		return 1;
	}
}
