#include<iostream>
using namespace std ;
class student 
{
	int a,b,c,i,n; 
	
	public :
		void get()
		{
			cout << "enter tw numbers";
			cin >> a >> b ;
		}
		
		friend void print(student);
};
void print(student s1)
{
	int c ;
	c  =  s1.a + s1.b ;
	cout   << "the addition of a and b is"  << c ;
}
int main ()
{
	student s;
	s.get();
	print(s);
	return 0 ;
}
