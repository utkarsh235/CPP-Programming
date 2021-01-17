#include<iostream>
using namespace std;
template <class x>
x doubt(x a ,x b)
{
	if (a>b)
	return a;
	else 
	return b;
}
int main()
{
	char c, d ;
	cout << doubt(4,5) << "\n";
	cout << doubt(5.6,6.7) << "\n";
    cout << doubt(c ,d ) << "\n";
	return 0;
}
