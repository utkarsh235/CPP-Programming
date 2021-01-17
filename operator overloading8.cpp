#include<iostream>
using namespace std;
class out 
{
	public :
		int a;
		void get()
		{
			cout << "enter a number";
			cin >> a ; 
		}
		out operator <<(out o)
		{
			out o4;
			o4.a = a + o.a ;
		}
};
int main()
{
	out o1,o2,o3;
	o1.get();
	o2.get();
	o3 = o2<<o1;
	cout << "addition is" << o3.a;
	return 0 ;
}
