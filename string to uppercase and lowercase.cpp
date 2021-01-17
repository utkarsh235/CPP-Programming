#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	cout << "enter a string\n";
	gets (a);
	cout << "\nthe string entered was\t" << strupr(a) ;
	cout << "\n the string entered was\t" << strlwr(a);
		return 0;
	
}
