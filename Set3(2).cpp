#include<iostream>
using namespace std;
class complex
{
float real, imaginary;
public:
complex()
{cout<<"\n Enter the value of real"<<endl;
cin>>real;
cout<<"\n Enter the value of imaginary"<<endl;
cin>>imaginary;
cout << "\n hello";
}

void display()
{
	cout << "\n the real part is" <<real;
	cout << "\n the imaginay part is" << imaginary;
}
complex sum(complex &c)
{
	this->real = real+c.real;
	this->imaginary = imaginary + c.imaginary;
    cout << this->real << "+ i" << imaginary;
}
~complex()
{
	cout << "\n object is destroying";
}	
};
int main()
{
	complex c1,c2;
	c1.display();
    c2.display();
    c1.sum(c2);
    return 0 ;
}

