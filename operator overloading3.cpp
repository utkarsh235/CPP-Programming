#include<iostream>
using namespace std;
class a
{
	int b,c,d;
	public :
		void fun()
		{
			cout << "enter a number";
			cin >> b;
		}
		void operator --()
		{
			cout << "the number entered was" << b;
		}
};
int main()
{
	a obj;
	 obj.fun();
	 --obj;
	 return 0;
}
