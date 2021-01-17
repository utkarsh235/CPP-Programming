#include<iostream>
using namespace std;
class complex 
{
	int a,b,c,i,n;
	public : 
	    complex(int x, int y)  // double valued parameterized constructor
	    {
	    	a = x ;
	    	b = y;
	    	cout << "the value of a and b is\n" << a << "\n" << b;
		}
	    complex(int k)  // parameterized constructor 
	    {
	    	a =k ;
	    	cout << "\nthe new value of a is " << a;
		}
	    complex()    // default constructor
	    {
	    	cout << "\n hello folks!!";
		}
};


int main()
{
	complex c1(3,4),c2(5),c3;
	
	return 0 ;
}


 
