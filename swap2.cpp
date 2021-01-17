#include<iostream>
int swap(int* , int*);
using namespace std ;
int main()
{
	int a,b,i,n;
    
	int *w ,*u	;
	w = &a;
	u = &b;
	cout << "enter two numbers";
	cin >> a >> b;
	
	swap(&a , &b);
	cout << "the swaped value of a and b are " << a << b;
	return 0;
}
int swap (int *x , int *y )
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return *x ;
	return *y ; 
	
}
