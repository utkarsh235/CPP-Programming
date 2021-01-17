#include<iostream>
#include<cmath>
using namespace std ;
class equation
{
   int a,b ,c, i, n ,x,y;
   
   public : 
   void display();
   void get();
   void answer();	
} e ;
void equation :: display()
{
	cout << "let your quadratic equation be: \n a*x^2 + bx + c then,\n enter the values of a,b,c";
}
void equation :: get()
{
	cin >> a;
	cin >> b >> c;
     answer();
}
void equation :: answer()
{
    cout << "the solution of the above quadratic equation is :";
	x =  (  -b + sqrt(b*b - 4*a*c)  ) /(2*a)	;
	y =  (  -b - sqrt(b*b - 4*a*c)  ) /(2*a)	;
        
    cout <<"\n" << x <<"\n" << y;
    cout << "\nthank you for using our program";
} 
int main ()
{
	e.display();
	e.get();
	
	return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
