#include<iostream>
using namespace std;
class unary
{
	public:
	int a,b,c;
	public :
		void get()
		{
			cout << "enter a number";
			cin >> a;
		}
		unary operator -(unary u)
		{
			unary u4;
			u4.a = a - u.a;
		    return u4;
		}
};
int main()
{
	unary u1,u2,u3;
	u1.get();
	u2.get();
	u3 = u2-u1;
	cout << u3.a ;
	return 0 ;
}
