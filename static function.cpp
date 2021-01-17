#include<iostream>
using namespace std ;
class number
{
	int a,b,c,i,n;
	static int count ;
	
	public : 
	void get();
	void printno();
	void printcount();
};
int number :: count ;
void number :: get()
{
	cout << "enter any number";
	cin >> a; 
}
void number :: printno()
{
	count++;
	cout << "\nthe number entered was" << a;
}
void number :: printcount()
{
	cout << "\n the value of count is" << count;
}
int main()
{
	number n1, n2 , n3 ;
	
	n1.get();
	n1.printno();
	n1.printcount();
	n2.get();
	n2.printno();
	n3.get();
	n3.printno();
	n2.printcount();
	n2.printcount();
	
	return 0;
}



