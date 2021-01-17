#include<iostream>
using namespace std ;
class power 
{
	int a,b,c,i=1,n;
	void logic();
	
	public :
		void get();
		
		
}p;
void power :: get()
{
	cout << "enter the number and his power to be calculated";
	cin >> a >> b;
	logic();
}
void power :: logic()
{
	for(n=1 ;n<=b ; n++)
	{
		i = i*a;
	}
	cout << a << " to the power "<<b <<"is" <<i;
}
int main ()
{
	p.get();
	return 0;
}
