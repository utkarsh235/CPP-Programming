#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public :
		sample(int a ,int b)
		{
			this -> a = a;this -> b = b;
		}
		sample(sample &old)
		{
			a= old.a;
			b=old.b;
		}
		void print()
		{
			cout << a << "\n" << b;
		}
};
int main()
{
	sample s1(10,20),s2(s1);

s1.print();
	s2.print();
	return 0 ;
}
