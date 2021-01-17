#include<iostream>
using namespace std;
int main()
{
	int temp,j,i,n;
	cout << "enter the no. of elements you want to enter ";
	cin >> n ;
	int arr[n];
	cout << "enter the no. of elements";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<n;i++)
	  {
	  	for( j=i+1;j<n;j++ )
	  	{
	  		if(arr[i] > arr[j])
	  		  {
	  			 temp = arr[i];
	  			 arr[i] = arr[j];
	  			 arr[j] = temp; 
			  }
	    }
	  }
	
		cout << "the sorted array is";
		for(i=0;i<n;i++)
		{
			cout << arr[i];
			cout << "\n";
		}
	return 0 ;
}
