#include<iostream>
using namespace std;
class prime 
{
	int a,b,c,i,n;
	public:
	void get();
	void print();
};
void prime :: get()
{
	cout << "enter two numbers ";
	cin >> a  >> b ;
}
void prime :: print()
{
	for (i=a; i<=b ; i++)
	{
		for (n=2 ; n<i ; n++)
		{
			if (i%n == 0)
			{
			     	break;
			}
		}
		if ( i%n != 0)
		{
			cout << i <<"is a prime number";
		}
	}
}
int main()
{
	prime p;
	p.get();
	p.print();
	return 0;
}
