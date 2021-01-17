#include<iostream>
using namespace std;
class car
{
	public :
		car()
		{
			cout << "this is a car with zero arguments";
		}
		car(int m)
		{
			cout << "this is a car with one argument ";
		}
};
int main()
{
	car c1(), c2(4);
	return 0;
}
