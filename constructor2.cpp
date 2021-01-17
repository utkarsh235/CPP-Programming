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
		complex(const complex &c)  // copy constructor
		{
			a = c.a;
			b = c.b;
			cout << "\n this is also the new value of a and b" << a  << "\n"  << b; 
			cout << "\nthis is the value of c" << &c;
		}
};


int main()
{
	complex c1(3,4),c2(5),c3;
	complex c4(c1);
	
	return 0 ;
}


 
