#include<iostream>
#include<cstring>
using namespace std ;
int main ()
{
	char a[100];
	cout << "enter a string\n";
	gets (a);
	cout << "the string entered was\t"<<a;
	cout << "\nand it's length is:" << strlen(a);
	return 0;
}
