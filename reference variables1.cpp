#include<iostream>
using namespace std ;
int main ()
{
	int a,b,c;
	
	cout << "enter a number";
	cin >> a; 
	
	int &x = a;
	cout << "the number entered was " <<x;
	return 0 ;
}
