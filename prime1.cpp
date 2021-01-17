#include<iostream>
using namespace std;
class prime
{
	int a,b,c,i,n;
	int count = 0;
	
	void print();
	public :
		void get();
}p;
void prime :: get()
{
	cout << "\nenter the number which you want to check, is prime or not";
	cin >> a;
	print();
}
void prime :: print()
{ 
	for (i = 2; i<a ; i++)
	{
		if (a%i == 0)
		{
			count++;
		}
	}
	if (count > 0)
	{
		cout << a << "\nis not a prime number";
	}
	else 
	{
		cout << a << "\nis a prime number";
	}
}
int main()
{
  p.get();
  cout << "\nprogram successful";
  return 0;	
}






