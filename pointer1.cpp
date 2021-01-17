#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	int **q;
	int ***z;
	p = &a;
	q = &p;
	z = &q;
	cout << "\nthe adress of a is" <<p;
	cout << "\nthe adress of p is" << q;
	cout << "\nthe adress of q is" << z;
	return 0;
}
