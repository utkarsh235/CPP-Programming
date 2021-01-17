#include<iostream>
using namespace std ;
int main()
{
	int n , i;
	cout << "enter the number of elements you wanna enter\n ";
	cin >> n;
	int *s = new int [n];
	int arr[n];
	cout << "enter the numbers \n";
	for (i=0 ; i< n ; i++)
	{
		cin >> arr[i];
	}
	delete []s;
	cout << "the numbers that were entered are \n" ;
	for (i= 0 ; i<n ; i++)
	{
		cout << arr[i];
		cout << "\n";
	}
	return 0 ;
}
