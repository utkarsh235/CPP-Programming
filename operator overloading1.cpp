#include <iostream>
using namespace std ;
class complex 
{
	int a,b,c,i,n;
	
	public :
		void setdata();
		void showdata();
		complex operator+( complex c )
   {
	complex temp; 
	temp.a = a + c.a;
	temp.b = b + c.b; 
	return temp ;
   }
};
void complex :: setdata()
{
	cout << "enter two numbers";
	cin >> a >> b;
}
void complex :: showdata()
{
	cout << "the numbers entered was \n" << a << "\n" <<b;
}

int main()
{
	complex c1,c2,c3;
	c1.setdata();
	c2.setdata();
	c3 = c1+c2; 
	c3.showdata();
}



