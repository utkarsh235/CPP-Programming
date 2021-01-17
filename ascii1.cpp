#include<iostream>
using namespace std;
void myfunc(int a);
int main()
{
	char c;
	int a ;
	cout << "enter the value of c ";
	cin >>c ;
    a = c;	
    return 0;
}
void myfunc(int a)
{
	cout << "the numeric value of a is" << a;
}
