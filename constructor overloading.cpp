#include<iostream>
using namespace std;
class car
{
	public :
	car()
	{
		cout << "this is a car";
	}
};
class sportscar : public car
{
	public :
	sportscar()
	{
	cout << "this is a sports car";
    }
};
int main()
{
	sportscar sc1;
	return 0;
}
