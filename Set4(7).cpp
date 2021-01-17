#include<iostream>
using namespace std;
template<class test>
void swap(test &a,test &b )
{
 test temp = a;
 a = b;
 b = temp;	
}

int main()
{
	int x1,x2;
	float y1,y2;
	cout << "enter values u need to swap";
	cin >> x1;
	cin >> x2;
	cout << "give two foloat values";
	cin >> y1;
	cin >>y2;
	swap(x1,x2);
	swap(y1,y2);
	cout << "x1 = " << x1;
	cout << "x2 = " << x2;
	cout << "y1 = " << y1;
	cout << "y2 = " << y2;
	return 0;
}
