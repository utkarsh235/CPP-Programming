#include<iostream>
using namespace std;
class average
{
	int a,b,c,i, arr[100];
	float averages, n , sum;
	
	
	public :
		void get();
		void logic();
		void print();
		
};
void average :: get()
{
	cout << "enter number of elements that you wanna enter numbers";
	cin >> n;
	logic();
	
}
void average :: logic()
{
	sum = 0 ;
   for (i=0 ; i<n ; i++)
   {
     cin >> arr[i]   ;	
   }	
   for (i=0 ; i< n; i++)
   {
   	 sum = sum + arr[i];
   }
   averages = sum / n ;
}
void average :: print()
{
	cout << "the average of students marks is" << averages;
}
int main()
{
	average as;
	as.get();
	as.print();
	
	return 0;
}


