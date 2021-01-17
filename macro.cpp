#include<iostream>
#define abs(number)  ((number) > 0 ? (number) : -(number) ) 
using namespace std;
int main()
{
	cout << abs(2);
    cout << "\n" << abs(-1);
	return 0;
}
