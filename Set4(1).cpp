#include<iostream>
using namespace std;
class Complex
{
	private :
		int real , imaginary;
		public :
		void set(float real ,float imaginary)
		{
			this->real = real;
			this->imaginary =  imaginary ;
		}
		void display()
		{
			cout <<"\n" <<  this->real << "+ i" << this->imaginary ;
		}
		Complex sum(Complex c)
		{
			Complex complexnumber;
			complexnumber.real = real + c.real;
			complexnumber.imaginary = imaginary + c.imaginary;
			return complexnumber;
		}
};
int main()
{
	Complex c1,c2,c3;
	c1.set(5,6);
	c2.set(6,7);
	c1.display();
	c2.display();
	cout << "the sum is";
	c3 = c1.sum(c2);
	c3.display();
	return 0;
}
