#include<iostream>
using namespace std ;
class complex
{
	int a,b,c,i,n;
	public: 
	void setdata()
	{
		cout << "enter two numbers " ;
		cin >>  a >> b ; 
	}
	void showdata()
	{
		cout << "the addition of numbers is" << a  << "\n" << b;
	}
	complex operator + (complex c)
	{
		complex temp ;
		temp.a=a+c.a;
		temp.b=b+c.b; 
	}
};

int main()
{
	complex c1,c2,c3;
	c1.setdata();
	c2.setdata();
	c3 = c1 + c2 ;
	c3.showdata();
	return 0 ;
}
