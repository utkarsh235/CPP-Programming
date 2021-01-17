#include<iostream>
using namespace std;
int main()
{
	int a,b,i,n,temp,j;
	cout << "enter the number of elements you wanna enter";
	cin >> n;
	int arr[n];
	cout << "enter the elements ";
	for (i=0 ; i<n ;i++)
	{
		cin >> arr[i];
	}
	for (i=0 ;i < n ; i++)
	{
		for (j=0; j < n-i-1 ; j++)
		{
			arr[j] = temp ;
			arr[j+1] = arr[j];
			temp = arr[j];
		}
	}
	cout << "\n the sorted array is ";
	for (i=0 ; i<n ;i++)
	{
		cout << arr[i];
		cout << "\t";
	}
	return 0;
}
