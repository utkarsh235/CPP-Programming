#include<iostream>
using namespace std;
class complex
{
	int a,b,c;
	public :
		void getdata()
		{
		     cout << "enter two numbers ";
			 cin >> a >> b; 	
		}
		 void showdata();
		friend complex operator+(complex , complex );
};
complex operator+(complex c, complex d)
{
	complex temp ;
	 temp.a = c.a + d.a;
	 temp.b = d.b + c.b;
	 return temp;
}
void complex :: showdata()
{
	cout << "the numbers entered were " << a << b; 
}
int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3 = c1 + c2;
	c3.showdata();
	return 0 ;
}
