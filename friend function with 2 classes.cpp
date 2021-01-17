#include<iostream>
using namespace std;
class complex2;
class complex1
{
	int a,b,c,d;
    
    public :
    	void setdata()
    	{
    		cout << "enter two numbers";
            cin >> a >> b;
		}
        friend void printdata(complex1 , complex2);
};



class complex2
{
		int a,b,c,d;
    
    public :
    	void setdata()
    	{
    		cout << "enter two numbers";
            cin >> a >> b;
		}
        friend void printdata(complex1 , complex2);
};

void printdata(complex1 x , complex2 y)
{
	cout << "the numbers entered were:\n " << x.a << "\n" << x.b << "\n" << y.a << "\n" <<y.b;
}

int main()
{
	complex1 c1,c2,c3;
	complex2 c4,c5,c6;
	c1.setdata();
	c4.setdata();
	printdata(c1 , c4);
	return 0 ;
}



