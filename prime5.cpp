#include<iostream>
using namespace std;
int prime(int);
int main ()
{
	int a,b,c,i,n ;
	bool flag;
	cout << "enter any number which you wanna check is prime or not";
	
	cin >> a;
	flag = prime(a);
	if (flag == true)
	{
		cout <<  a<< "is a prime number";
	}
	else 
	{
		cout << a << "is not a prime number";
	}
	return 0 ;
}
int prime(int x)
{
	int i;
	bool flag = true;
	for (i = 2 ; i < x ; i++)
	{
		if ( x%i == 0)
		{
			flag = false ;
		}
	}
	return flag; 
}
