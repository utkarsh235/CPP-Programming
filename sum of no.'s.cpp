#include <iostream>
using namespace std ;
int main ()
{
	int a ,b ,i ;
	cout << "enter no. between which you want the sum ";
	cin >> a ;
	cin >> b ;
	int sum =0;
	for (i=a;i<=b;i++)
	{
		sum = sum + i ;
	}
	cout << "the sum of no.'s is" << sum ;
	return 0;
	
	
}
