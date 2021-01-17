#include<iostream>
int prime(int , int);
using namespace std;
int main ()
{
	int a,b,c,i,n;
	bool haa;
	
	cout << "enter the numbers between which you want to print prime numbers\n";
	cin >> a >> b;
	
	for ( i = a; i < b; i++)
	{
		for (n= 2 ; n < i ; n++ )
		{
			haa = prime( i, n);
		}
		if ( haa == true )
		{
		   cout << i << "is a prime number\n";	
		} 
    }
    return 0;
}
int prime (int x , int y)
{
	bool haa = true ;
	if ( x%y == 0 )
	{
		haa = false ;
	}
	return haa ;
}
