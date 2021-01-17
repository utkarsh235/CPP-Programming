#include<iostream>
using namespace std ;
int main()
{
	int a,b,c,i,n , arr[60],temp ,j;
	
	cout << "enter the number of elements you wanna enter in the array";
	cin >> n;
	
	cout << "enter the elements ";
	for (i= 0 ; i < n ; i++)
	{
		cin >> arr[i];
	}
	
cout  << "the original array is";
    for (i = 0 ;i <n ; i++)
    {
    	cout << arr[i] << "\n";
	}
	
	for ( i=0 ; i < n ; i++)
	{
		for ( j = 0 ; j <n -i ; j++)
		{
			if ( arr[j] > arr[j+1])
		   {
		        temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	 	
	       }
			 
		}
	}
	cout << "the sorted array is";
	for (i = 0 ; i < n ; i++ )
	{
		cout << arr[i] << "\n" ;
	}
	return 0 ;
}
