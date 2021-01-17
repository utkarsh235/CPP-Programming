#include<iostream>
using namespace std ;
class complex2;
class complex1 
{
	int a,b,c,i,n;
	
	public :
		friend void display(complex1, complex2);
		void getdata()
		{
			cout << "enter two numbers ";
			cin >>a >> b ;
		}
};
class complex2
{
	int a,b,n; 
	public: 
	
			void getdata()
		{
			cout << "enter two numbers ";
			cin >>a >> b ;
		}
		friend void display(complex1, complex2);
};
void display(complex1 c ,complex2 n )
{
	cout << "the numbers entered were "<< c.a << "\n " << c.b;
	cout << n.a  << "\n" << n.b;
	cout << "and the addition of the x and y coordinates are " << c.a + n.a  << "\n and " <<"\n" << c.b + n.b ;  
}

int main()
{
	complex1 c1,c3;
	c1.getdata();
	complex2 c2;
	c2.getdata();
	display(c1 , c2);
	return 0 ;
	
}
