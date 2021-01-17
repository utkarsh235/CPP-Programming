#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,n;
	cout << "enter the coloumns upto which you wanna print the pattern";
	cin >> n;
	for (a=1; a<=n ;a++)
	{
		for (b=1; b<=a; b++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
