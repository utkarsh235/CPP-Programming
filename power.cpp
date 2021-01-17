#include<iostream>
using namespace std;
int main()
{
	int a,b ,i,n,s ;
	
	cout << "enter the number and its power to be calculated";
	cin >> a;
	cin >> b;
	for (i=1; i <=b ; i++)
	{
		s = a*a;
	}
	cout << a <<"to the power"<< b <<"is" << s;
	return 0;
}
