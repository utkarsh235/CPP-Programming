#include<iostream>
using namespace std ;
int main()
{
    int a[6],i, sum=0;
    cout<< "enter 6 no.s\n";
	for(i=0;i<=5;i++)
	{
	    cin >> a[i];
	}
	for(i=0;i<=5;i++)
	{
	    sum = sum +a[i];
	}
	cout<< "the sum of all the elements of the array is\n"<< sum;
	return 0 ;
}
