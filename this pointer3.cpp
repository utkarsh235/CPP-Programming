#include<iostream>
using namespace std;
class complex
{
	public :
          int a,b,c;
		void print()
		{

			cout << "\nthe adress of your object is" << this;
            cout << "\nthe adress of a is"<< this->a;
            cout << "\nthe adress of b is"<< this->b;
            cout << "\nthe adress of c is"<< this->c;
		}
};
int main()
{
	complex c1,c2;
	c1.print();
	c2.print();
	return 0;
}
