#include<iostream>
using namespace std;
class temp
{
	int celcius , farhenite ;
	
	public :
		void gettemperature(void);
		void printtemperature(void);
};

 void temp ::  gettemperature(void)
{
	cout << "enter the temperature in celcius";
	cin >> celcius ;
}
void temp ::  printtemperature(void)
{
	farhenite = ((5*celcius)/9) + 32;
	cout << "temp in farhenite is " << farhenite ;
	
}
int main ()
{


	temp t ;
	t.gettemperature();
	t.printtemperature();
	return 0;
	
}
