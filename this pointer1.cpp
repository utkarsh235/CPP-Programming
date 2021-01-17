#include<iostream>
using namespace std ;
class student 
{
	int a ,b;
	public : 
	void getdata()
	{
		cout << "enter a number";
		cin >> a;
	}
	void printdata()
	{
		cout << "the  number entered was " << a;
	}
};
int main()
{
	student s1 , *s2;
	s2 = &s1;
	s1.getdata();
	s1.printdata();
	s2->getdata();
	s2->printdata();
	return 0;
}
