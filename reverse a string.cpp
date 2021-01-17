#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	cout << "enter a string\n";
	gets (a);
	cout << "\nthe reverse of the string entered is "<< strrev(a);
	return 0;
}
