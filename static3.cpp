#include<iostream>
using namespace std;
class complex 
{
	static int a;
	int b;
	public :
		void getdata()
		{
			cout << "enter the value of a ";
			cin >> a;
		}
		void showdata()
		{
			cout << "the value of a is " << a;
		}
};
int complex :: a;
int main()
{
	complex c1;
	c1.getdata();
	c1.showdata();
	return 0;
}
