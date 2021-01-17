#include<iostream>
using namespace std;
template<class t1,class t2>
float sum(t1 x , t2 y)
{
	return x+y;
}
template <class t1,class t2>
float diff(t1 z , t2 w)
{
	return z-w;
}
int main()
{
	cout << "sum 1 = " <<sum(10.1,20);
	cout << "\nsum2 = " <<sum(10,10.4);
	cout << "\ndifference is " <<diff(10.1,20);
	cout << "\ndifference is " <<diff(10,10.4);
	return 0 ;
}
