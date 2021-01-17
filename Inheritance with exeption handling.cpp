#include<iostream>
using namespace std;
class b
{
	
};
class d : public b
{
	
};
int main()
{
	d derived ;
	try
	{
		throw derived ;
	}
	catch(b base)
	{
		cout << "this is base class catch";
	}
	catch(d deri)
	{
		cout << "this is derived class catch";
	}
	return 0 ;
}
