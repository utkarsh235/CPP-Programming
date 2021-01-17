#include<iostream>
using namespace std ;
class complex 
{
	int a;
	public :
		complex()
		{
			cout << "enter a number";
			cin >> a;
		}
		showdata()
		{
			cout << "the number entered was" << a;
		}
};
int main()
{
	complex c1;
	c1.showdata();
	return 0;
}
