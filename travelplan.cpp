#include<iostream>
using namespace std;
class travelplan
{
	public :
	long int plancode;
	char place[40] ;
	int number_of_travellers;
	int number_of_buses;
	
	travelplan()
	{
		plancode = 1001;
		number_of_travellers = 5;
		number_of_buses = 1;
	}
	newplan()
	{
		cout << "\nenter the plan code";
		cin >> plancode;
		cout << "enter the name of place";
		gets(place);
		cout << "enter the number of treavellers";
		cin >> number_of_travellers;
		
		if (number_of_travellers <20)
		{
			number_of_buses = 1;
		}
		else if (number_of_travellers>=20 &&number_of_travellers<40)
		{
			number_of_buses = 2;
		}
		else if(number_of_travellers>=40)
		{
			number_of_buses = 3;
		}
	}
	showplan()
	{
		cout << "\nthe plan code is" << plancode;
		cout << "\nthe name pf the place is" << place;
		cout << "\nthe number of travellers are" <<number_of_travellers;
		cout << "\nthe number of buses going are" << number_of_buses;
	}
};
int main()
{
	travelplan tp1;
	return 0;
}


