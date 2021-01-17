#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "enter a number";
	cin >> a;
	try
	{
		if(a<0)
		{
			throw "error";
		}
	}
	catch(const char* e)
	{
		cout << e;
	}
	cout << "finally";
	return 0 ;
	
}
