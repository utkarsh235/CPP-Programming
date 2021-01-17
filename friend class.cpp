#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public :
		A()
		{
			a = 0;
		}
		friend class B;
};
class B
{
	int b;
	public :
		void showA(A &a1)
		{
			cout << "the value of a is" << a1.a;
		}
};
int main()
{
	B b1;
	b1.showA(b1);
	return 0;
}

