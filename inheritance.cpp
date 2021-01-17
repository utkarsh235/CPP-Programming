#include<iostream>
using namespace std;
class car
{
	int gear ;
	public :
		void incrementgear()
		{
			if (gear < 5)
			{
				gear++ ;
				cout << "the changed value of gear is" << gear;
			}
			else 
			{
				cout << "the value of gear remains unchanged ";
			}
		}
		
};

class sportscar : public car 
{
	public :
  void logic()
  {
  	cout << "enter the value of gear ";
  	cin >> gear ;
  	incrementgear();
  }
	
};


int main()
{
	sportscar s1;
	s1.logic();
	return 0 ;
	
}
