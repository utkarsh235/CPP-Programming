#include<iostream>
using namespace std;
	int a = 5,b = 10;
	int *u;
	int *t;
    u = &a;
    t = &b;
	
	public :
		void change();
		void print();
void choice ::  change()
{
	
	u = &a;
	t = &b;
	
}
void choice ::  print()
{
	cout << "the value of a is " << a;
		cout << "the adress of a is " << &a;
			cout << "the adress of a is " << u;
				cout << "the value of b is " << b;
					cout << "the adress of b is " << &a;
						cout << "the adress of b is " << t;
							cout << "the value of u is " << u;
							
									cout << "the value of t is " << t;
									
}
int main ()
{
	choice s ;
	s.change();
	s.print();
	return 0;
}
