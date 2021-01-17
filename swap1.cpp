#include <iostream>
int swap(int , int);
using namespace std;
int main ()
{
	int a,b,c,i,n ;
	
	cout << "enter two numbers";
	cin >> a >> b ;
	n = swap (a,b);
	return 0;
	
	
}
int swap (int x , int y)
{ 
   int temp;
   temp = x;
   x = y;
   y = temp ;
   cout << "the swapped value is" << x << y;
}
