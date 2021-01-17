#include<iostream>
using namespace std ;
class reverse 
{
	int a,b,c,i,n;
	int arr1[100] , arr2[100];
	
	public : 
	void getnumbers();
	void turn();
	void display();
};
void reverse :: getnumbers()
{
	cout << "enter the number of elements you wanna enter in the array\n";
	cin  >> n ;
	cout << "enter the numbers\n ";
	
	for (i = 0; i< n ; i++)
	{
		cin >> arr1[i];
	}
}
void reverse :: turn()
{
    for (i = 0; i<n ; i++)
	{
       arr2[i] = arr1[n - i];		
	}    	
} 
void reverse :: display()
{
	cout << " the reversed array is \n";
	for (i =0 ; i<n ; i++)
	{
		cout << "\n" << arr2[i];
	}
}
 
 int main()
 {
 	reverse r;
 	r.getnumbers();
 	r.turn();
 	r.display();
 	
 	return 0;
 }
 
 
 
 
 
 
 
