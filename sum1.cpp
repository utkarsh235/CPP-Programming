#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int a,b,c,i,n;
	
	cout << "enetr the number upto which you want to print the sum of natural numbers";
	cin >> a;
	
	n = sum(a);
	
	cout << "sum = " << n;
	return 0;
	
	
}
int sum (int x)
{
	int add;
	
	if ( x != 0 )
	{
	add = x + sum(x-1);
	return add ;
    }
}
