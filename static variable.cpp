#include<iostream>
using namespace std;
class complex 
{
	int a;
	static int b;
	public :
		void get(int i ,int j)
		{
			a = i;
			b = j;
		}
		void print()
		{
			cout << "the value of non static a is " << a;
			cout << "\n the value of static b is "  << b;
		}
};
int complex :: b;

int main()
{
	complex c1;
	c1.get(5,10);
	c1.print();
	return 0;
}
