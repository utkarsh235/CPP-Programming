#include<iostream>
using namespace std;
void swap(int *w , int *z);
int main()
{
	int a,b,c,i,n;
	cout << "enter the va;ue of a and b";
	cin >> a >> b;

	
	swap (&a,&b);
	return 0;
	
}
void swap (int *w ,int *z)
{
	int *temp ;
	
	*temp = *w;
	*w = *z; 
	*z = *temp ;
	
	cout << "the swaped values are "<< *w << *z;
}
