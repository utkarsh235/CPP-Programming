#include<iostream>
using namespace std;
int main()
{
	int b,c,i,n;
	int count;
	double a;
	cout << "enter any number";
	cin >> n;
	count = 0;


		for (a=10 ; a< 10000000 ; a=a*10)
		{
			if (n / a == 0)
			{
				cout << "the number of digits in the number entered is " << count +1 ;
				exit(1);
			}
			else 
			{
				count ++;
			}
		}
	
	return 0 ;
}
