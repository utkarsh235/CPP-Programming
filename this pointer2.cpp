#include<iostream>
using namespace std;
class abc
{
	int d,e;
	public :
		void get()
		{
			cout << "my objects adress iss" << this;
		}
};
int main()
{
		abc c1 , c2;
		c1.get();
		c2.get();
		return 0;
}
