#include<iostream>
using namespace std ;
int main ()
{ 
int a,b ,i, n ;
bool isprime = true ;
	cout << "enter the no you want to chech is a prime or not";
	cin >> a ;
	for (i =2 ; i<a ;i++)
	{
		if (a%i == 0)
		{
			isprime = false ;
			break; 
			
		}
	     if(isprime)
	     {
	     	cout << a << "is a prime number";
	     	
		 }
		 else 
		 {
		 	cout << a << "is not  a prime number ";
		 }
		
    }
	return 0;
}
