#include <iostream>
using namespace std ;
int main()
{
	int n;
	cout << "enter the length of string you want to enter";
	cin >> n; 
	char a[n],i;
	
	cout << "enter a string";  
	
	for (i=0;i<n;i++)
	{
	   cin >> a[i];
	}
	cout << "the string entered was\n";
	for (i=0;i<n;i++)
	{
		cout << a[i] ;
	}
	return 0;
}
