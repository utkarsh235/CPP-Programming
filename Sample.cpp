#include<iostream>
using namespace std;
int main()
{
	cout << "enter a name";
	char a[50];
	cin.getline(a,50);
	cout << "the name entered is" << a;
	return 0 ;
}
