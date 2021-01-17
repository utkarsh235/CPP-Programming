#include<iostream>
using namespace std ;
int main()
{
	int a,b,c,i,n;
	
	cout << "enter any 5 digit number";
	cin >> a;
	
	if ((a % 10)*10000 + (((a/10)%10)*1000) +  (((a/100)%10)*100)  +  (((a/1000)%10)*10)  + (((a/10000)%10)*1)  == a )
	{
		cout << a <<"is a palindrome number";
	}
	else
	{
		cout << a << "is not a palindrome number";
	}
	return 0;
}
