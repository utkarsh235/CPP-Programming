#include<iostream>
#define ram 1
#define shyam 2
#define ghanshyam 3
#define name shyam
using namespace std;
int main()
{
	#if name == ram
	cout << "the name entered is ram";
	#elif name == shyam
	cout << "the name entered is shyam";
	#elif name == ghanshyam
	cout << "the name entered is ghanshyam";
	#endif
	return 0;
}
