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
		void showdata()
		{
			cout << "the numbers entered were "<< a  <<"\n" <<b;
		}
		friend complex operator- (complex);
};
complex operator- (complex c)
{
	complex temp;
	temp.a= -c.a;
	temp.b= -c.b;
	return temp;
}

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c3 = -c1;
	c3.showdata();
	
	
	
	
}
