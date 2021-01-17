#include<iostream>
using namespace std;
class complex 
{
	int a,c,b,i,n;
	
	public :
		void set()
		{
			cout << "enter two numbers\n ";
			cin >> a  >> b ;
		}
		void display();
		complex sum (complex c)      // parameterized constructor
        { 
          complex d;
          d.a = c.a + a;
          cout << "\nthe value of d.a is \t" << d.a;
          cout <<  "\n the va;lue of a is " << a;
          cout  << "\n the value of c.a is " << c.a;
		}
};

int main()
{
	complex c1,c2,c3;
	c2.set();
	c1.set();
	c1.sum(c2);
	return 0 ;
}
