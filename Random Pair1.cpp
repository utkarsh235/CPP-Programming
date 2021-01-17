#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,N,j,T;
	float count,count23,max;
	cout << "\ngive the number of test cases ";
	cin >> T;
	for (b=0 ; b < T ; b++ )
	{
	cout << "\n enter the elements you wanna enter ";
	cin >> N;
	int A[N];
	cout << "\n enter the elements of the array";
	for (i=0 ; i<N ; i++)
	{
		cin >> A[i];
	}
	count = 0;
	count23 = 0;
	max = 0;
	for(i=0 ; i<N ; i++)
	{
		for (j=i+1 ; j<N ;j++)
		{
		cout << "\n the possible pairs are  "<< A[i]<< "," << A[j];
		count ++ ;
        }
	}
	for(i=0; i<N ;i++)
	{
		for (j=1; j<N ; j++)
		{
			if (A[i] + A[j] > max)
			{
				max = A[i] + A[j];
			}
		}
	}
	for(i=0; i<N ;i++)
	{
		for (j=1; j<N ; j++)
		{
			if (A[i] + A[j] == max)
			{
				count23++;
			}
		}
	}	
	
	cout << "\nprobability of getting arr[i] + arr[j] as maximum = " << count23/count ;
}
	return 0; 
}
