#include<iostream>
using namespace std;
class complex
{
	public :
	int a;
	public :
		void get()
		{
			cout <<"enter a number";
			cin >> a;
		}
		complex operator +(complex c)
		{
			complex c4 ;
			c4.a = a + c.a;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.get();
	c2.get();
	c3 = c1+c2;
	cout <<  c3.a;
	return 0;
}
