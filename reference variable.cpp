#include<iostream>
using namespace std; 
int main()
{
   int a,b,c,x;
   x = 5; 
   
   int &p = x; 
   
   for (c=1 ; c<=10 ; c++)
   {
         x++	;
   }	
   cout << x<<"\n" << p ;
   cout << "\nadress of p is" << &p ;
   cout << "\nadress of x is "<< &x ;
   return 0  ;
} 
