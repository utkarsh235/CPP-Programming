#include<iostream>
using namespace std;
class stud1
{
	int a ; 
	stud1(int k)
	{
		a = k;
	}
};
class stud2
{
	int b,c,d ;
	stud2(int x ,int y )
	{
		b = x ;
		c = y ;
		cout << "the two values entered were" << b  << "\n " << c;
	}
};

int main()
{
	int c , d;
stud2 s;
	cout << "enter two numbers ";
	cin << c << d; 
	s.stud2(c,d);

}
