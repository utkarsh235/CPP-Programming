#include<iostream>
using namespace std;
class largest
{
	int a,b,c,i,n,arr[60],lar;
	
	public :
		void get();
		void print();
};
void largest :: get()
{
	cout << "enter the number of elements you wanna enter in the array ";
	cin >> n;
}
void largest :: print()
{
	cout << "enter the elements";
	
	for (i =0 ;i<n ; i++)
	{
		cin >> arr[i];
	}
	
	for (i = 0; i < n; i++)
	{
		 if (arr[i + 1] < arr[i])
		 {
		 	lar = arr[i];
		 	arr[i] = arr[i +1];
		 	arr[i + 1] = lar ;
		 }
	}
	cout << "the sorted array is";
	for (i =0 ; i <n ; i++)
	{
		cout << arr[i] <<"\n";
	}
	cout << "the largest element of the array is " << lar;
	
	
}
int main ()
{
	largest l ;
	l.get();
	l.print();
	return 0 ;
}
