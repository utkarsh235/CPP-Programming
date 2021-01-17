#include<iostream>
using namespace std;
class data
{
	int a,b,c,i,n,lar;
	int arr[50];
	public :
		void getdata();
		void display();
		int largest();
};
void data :: getdata()
{
	cout << "enter the number of elements you want in your array";
	cin >> n;
	cout << "\n enter the elements of the array";
	for (i=0 ; i<n ; i++)
	{
      cin >> arr[i];		
	}
}
int data :: largest()
{
	int temp ;
	for (i=0 ; i<n ; i++)
	{
	     if (arr[i+1] > arr[i])
	     {
		temp = arr[i+1];
		arr[i+1] = arr[i];
		arr[i] = temp;
         }
    }
    return arr[i];
}
void display()
{
	int z ;
	z = largest();
	cout << "\n the largest element of the array is" << z;
}
int main()
{
	data d1;
	d1.getdata();
	d1.display();
	return 0 ;
}


