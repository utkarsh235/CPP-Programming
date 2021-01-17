#include<iostream>
using namespace std;
class a
{
	public :
		void f1()
		{
			cout << "this is of class a";
		}
		void f2()
		{
		}
};
class b : public a
{
	public :
		int x;
		void f1()
		{
			cout << "this is of class b";
		}
		void f2(int x)
		{
			cout << "this is again of class b";
		}
};
int main()
{
	b obj;
	obj.f1();
	obj.f2(2);
	return 0;
}
