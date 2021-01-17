#include<iostream>
using namespace std;
int main ()
{
	int n,i,a,b,largest;
	cout<< "enter the no. of elements you want to enter";
	cin>> n;
	int arr[n];
	cout<< "enter the no. of elements";
	for (i=0;i<n;i++)
	{
		cin>> arr[i];
	}
	arr[0]= largest;
	for (i=0;i<n;i++)
	{
		if(arr[i+1]>arr[i])
		{
		 largest = arr[i+1] ;
		}
	}
	cout<< "the highest no. is "<< largest ;
	return 0 ;
}
