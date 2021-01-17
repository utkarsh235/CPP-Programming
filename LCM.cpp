#include <iostream>
using namespace std;
int main ()
{
	int a,b,i,n;
	
	cout << "enter two numbers";
	cin >> a;
	cin >> b;
	if (a > b)
	{
		for (i=2; i <=b ;i++)
		{
			if (a%i==0 && b%i==0)
			{
				cout << i <<"is the LCM of " <<a << "and" <<b ;
			}
		}
	}
	if (b > a)
	{for (i=2; i <=a ;i++)
		{
			if (a%i==0 && b%i==0)
			{
				cout << i <<"is the LCM of " <<a << "and" <<b ;
			}
		}
	}
	return 0;
}
