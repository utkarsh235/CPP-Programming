#include<iostream>
using namespace std;
class student 
{
	public :
	int a;
	public :
		void showdata()
		{
			cout << "the value of a is " << a;
		}
};
int main()
{
	student s1 , s2;
	int student :: *ptr = &student :: a;
	s1.*ptr = 5;
	s1.showdata();
	student *ptr2 = new student ;
	ptr2->*ptr = 10;
	ptr2->showdata();
	return 0 ;
}
