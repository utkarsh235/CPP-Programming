#include<iostream>
#define a 1
#define b 2
#define c 3
using namespace std;
int main()
{
	
	#if a>b && a>c
	cout << "a is greatest ";
	#elif b>a && b>c
	cout << "b is greatest";
	#elif c>a && c>b
	cout << "c is greatest";
	#endif
	return 0;
}
