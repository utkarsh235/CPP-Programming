#include<iostream>
using namespace std;
int factor(int , int);
int main ()
{
	int a,b,c,i,n;
	
	cout << "enter two numbers whose G.D.F you wanna find";
	cin >>a >> b;
	n = factor(a,b);
	return 0 ;
}
int factor(int x, int y )
{
	int i , temp ;
	if (x > y)
	{
		for (i = 1 ; i< y ; i++)
		{
			if ( x%i == 0 && y%i == 0 )
			{
				temp = i ;
			}
		}
		cout << temp << "is the G.D.F of " << x  << "and" << y ;
	}
	
		if (y > x)
	{
		for (i = 1; i< x ; i++)
		{
			if ( x%i == 0 && y%i == 0 )
			{
				temp = i ;
			}
		}
		cout << temp << "is the G.D.F of " << x  << "and" << y ;
	}
	
}
