#include<iostream>
using namespace std;
class complex 
{
	int a,b,c;
	
	public :
		complex (complex c , complex d )  // constructor
		{
			
			cout << "enter two numbers \n ";
			cin >> c.a >> c.b;
			cout << "enter two more numbers \n";
			cin >> d.a >> d.b; 
			disp(c , d );
			complex sum(c , d);
			
		}

    void disp(complex c , complex d)
    {
    	cout << "the numbers entered are \n" << c.a << "\n" << c.b <<"\n" << d.a << "\n" << d.b;
	}
    complex sum(complex c , complex d )
	{
		complex c3;
		  c3.a = c.a + c.a ;
		  c3.b = d.b + d.b ;
		  
		  cout << "the addition of the numbers that you entered is \n " << c3.a << "\n" <<c3.b ;
		   
  	}	
  	
  	~complex()
  	{
  		cout << "this is a destructor" << "\n";
  		cout << "the object is destructing" << "\n" ;
    }
};


int main()
{
	complex  c1,c2 ;
	
	complex(c1 , c2);
	
	return 0;
}












