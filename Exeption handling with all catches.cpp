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
		else throw 1;
	}
    catch(...)
    {
    	cout << "\nyes!! you've got the second one";
	}
	cout << "finally";
	return 0 ;
	
}
