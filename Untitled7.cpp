#include<iostream>
using namespace std;

int a,b,c;
int add(int a, int b);
	int add(int a, int b)
	{
		int x ;
		x = a + b;
		return x;
	}
	int multiply(int x ,int y);
	int multiply(int x ,int y)
	{
		int z ;
		z = x*y;
		return z;
	}



int main()
{
	int a,b,c;
	int w;
	w = multiply(add(5,6) , 10);
	cout << "the value of w is " << w;
	return 0;
}
