#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,n,j;
	float count,count23,max;
	cout << "\ngive the number of test cases ";
	cin >> a;
	cout << "\n enter the elements you wanna enter ";
	cin >> n;
	int arr[n];
	cout << "\n enter the elements of the array";
	for (i=0 ; i<n ; i++)
	{
		cin >> arr[i];
	}
	count = 0;
	count23 = 0;
	max = 0;
	for(i=0 ; i<n ; i++)
	{
		for (j=i+1 ; j<n ;j++)
		{
		cout << "\n the possible pairs are  "<< arr[i]<< "," << arr[j];
		count ++ ;
        }
	}
	for(i=0; i<n ;i++)
	{
		for (j=1; j<n ; j++)
		{
			if (arr[i] + arr[j] > max)
			{
				max = arr[i] + arr[j];
			}
		}
	}
	for(i=0; i<n ;i++)
	{
		for (j=1; j<n ; j++)
		{
			if (arr[i] + arr[j] == max)
			{
				count23++;
			}
		}
	}	
	
	cout << "\nprobability of getting arr[i] + arr[j] as maximun = " << count23/count ;
	return 0; 
}
