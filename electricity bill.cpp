#include<iostream>
using namespace std;
class electricity
{
	int a,b,c,i,n,units;
	int price , price1 = 0 , price2 = 0  , price3 = 0 ;
	char name[50];
	
	public :
		void details();
		void unitsconsumed();
		void finalcharge();
};
void electricity :: details()
{
	cout << "enter the name of the user";
	cin >> name;
}
void electricity :: unitsconsumed()
{
	cout << "enter the units consumed by a consumer ";
	cin >> units;
	for(i = 1 ; i <= units && i <=100 ;i++)
	{
		
		price1 = price1 + 60 ;
	}
	for(i = 101 ; i<= 300 && i <=units ;i++)
	{
		price2 = price2 + 80 ;
	}
	for (i= 300 ; i <= units ; i++)
	{
		price3 = price3 + 90;
	}
	price = price1 + price2 + price3;
}
void electricity :: finalcharge()
{
	if (price < 5000)
	{
		cout << "your bill is" << 5000;
		
	}
	else if (price > 30000)
	{
		price = price + (0.15)*price;
		cout << "your bill is" << price;
	}
	else 
	{
		cout << "your bill is" << price;
	}
}

int main()
{
	electricity e;
	e.details();
	e.unitsconsumed();
	e.finalcharge();
	return 0;
}
