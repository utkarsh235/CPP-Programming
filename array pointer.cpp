#include<iostream>
using namespace std;
void print (int *w , int n); 
int main()
{
	int a,b,c,n,i; 
	
	int *arr[50];
	cout << "enter the number of elements you want to enter";
	cin >> n;
	cout << "enter the elements of the array";
	for (i=0; i < n ; i++ )
	{
		cin >> *arr[i];
	}
	for (i=0 ; i<n ; i++)
	{
		&b = *arr[i];
		print (&b , n);
	}
	return 0 ;
	
}
void print (int *w , int n)
{int i ;
  
	for (i = 0; i < n ; i++)
	{
		*w = *arr[i];
		cout <<  *w;	
	}
}
