#include<iostream>
using namespace std;
template <typename t> // suppose t is integer.
class user
{
	t value;
	public:
		void getvalue(t x)
		{
			cout << "\nthe value given is" << x;
		}
};
int main()
{
	user <int>obj1;
	obj1.getvalue(5);
	
	user <double>obj2;
	obj2.getvalue(5.6666);
	return 0;
}
