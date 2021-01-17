#include<iostream>
using namespace std;
class student 
{
	public :
	int a,b,c;
	void get()
	{
		cout << "enter the value of a" ;
		cin >> a;
	}
	void pass(student &s)
	{
		s.a = s.a *2 ;
		cout << "the value is" << s.a;
	}
};
int main()
{
	student s1;
	s1.a = 3;
	s1.pass(s1);
	cout << "\n the value of s.a is" <<s1.a;
	return 0;
}
