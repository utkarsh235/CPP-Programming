#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,n,m ;
	
	cout << "enter the value of m and n";
	cin >> m >> n;
	int arr1[m][n],arr2[m][n],arr3[m][n];
	
	cout << "enter the entries of first matrix";
	for (i=0 ; i<m ; ++i)
	{
		for (a=0 ;a<n ;++a)
		{
			cin >> arr1[i][a];
		}
	}
	cout << "enter the entries of second matrix";
		for (i=0 ; i<m ; ++i)
	    {
		    for (a=0 ;a<n ;++a)
		    {
		     	cin >> arr1[i][a];
		    }
	    }
	    
	    cout << "the matrix formed by adding matrix1 and matrix2 is ";
	    
	    for(i =0 ; i< m ;++i)
	    {
	    	for(a=0 ; a<n ; ++a )
	    	{
	    		arr3[i][a] = arr2[i][a] + arr1[i][a];
				cout  << arr3[i][a];
				cout <<"\t";  
			}
			cout << "\n";
		}
	    return 0 ;
}
