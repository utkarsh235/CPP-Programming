#include<iostream>
using namespace std;
class complex 
{
	int a,b;
	public :
		complex()
		{
			cout << "this is a costructor";
		}
};
int main()
{
	complex c1;
	complex c2;
	return 0;
}
