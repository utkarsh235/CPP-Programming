#include<iostream>
using namespace std;
class student 
{
	int a,b,c,d;
	
	public :
		student ()
		{
			a = 0;
			b = 5; 
			cout << "the value of a and b are: \n " << a << b;
		}
		student (int x)
		{
			a= x;
			cout << "now the value of a and b are : \n" << a  << b;
		}
		student (int x , int y)
		{
			a = x ;
			b = y; 
			cout << "now the value of a and b are : \n" << a  << b;
		}
		student (const student &s);
};
student :: student (const student &s)
		{
			a = s.a;
			cout << "the new value of a is \n"<< a;
		}
int main ()
{
	student s1= student(), s2=student(1) , s3= student(2,6) ,s4(s2);
	return 0 ;
	
}
