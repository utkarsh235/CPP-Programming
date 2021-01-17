#include <iostream>
using namespace std ;
int main ()
{
	int n, ballot, count =0 ,i,a , votes ;
	cout <<"enter the no. of votes given ";
	cin >> n;
	int arr[n];
	cout << "enter the votes";
	for (i=0 ;i<=n ; i++)
	{
		cin >> arr [i];
		if (arr[n]>5)
		{
			count++;
		}
	}
	for (a=1;a<=5;a++)
{votes = 0 ;
	for (i=0;i<n ; i++)
	{
		if (arr[i]==a)
		{
			 votes++;
		}
	}
	cout << " votes of candidate" <<a << "=" << votes ;
}
cout << "the number of spolit ballot are " << count;
return 0 ;

	
}
