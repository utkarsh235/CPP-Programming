#include<iostream>
using namespace std;
class complex
{
    public:
    int real ,imaginary ;
    public:
    complex()
    {
	}
    complex(int real , int imaginary)
    {
       this->real = real;
       this->imaginary = imaginary;
    }
    void display()
    {
        cout << "the complex number that you have entered is" << this->real << "+ i" << this->imaginary;
    }
    complex sum(complex c)
    {
        complex temp ;
        temp.real = real + c.real;
        cout << "\nreal = " << real ;
        cout << "\nc.real" << c.real ;
        cout << "\ntemp.real = " << temp.real ;
        temp.imaginary = imaginary + c.imaginary; 
        return temp;
    }    
};
int main()
{
    complex c1(1,2),c2(2,3),c3;
    c3 = c1.sum(c2);
    cout << "the sum of the complex numbers is " << c3.real << "+ i" << c3.imaginary ;
    return 0 ;
}
