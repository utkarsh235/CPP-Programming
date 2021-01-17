#include<iostream>
using namespace std;
class student 
{
	public :
	    int a,b;
		void get()
		{
		}
		student()
		{
		}
		student(student &s)
		{
			a = s.a;
		}
};
int main()
{
	student s1;
	s1.a = 5;
	student s2(s1);
	cout << s2.a;
	return 0 ;
}
