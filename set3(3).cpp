#include<iostream>
using namespace std;

class alpha 
{
int x;
public:
	alpha()
	{cout<<"Enter the value of x"<<endl;
	cin>>x;
	}
	void display()
	{
	cout<<"Entered value of x = "<<x<<endl;	
	}
	
	~alpha()
	{cout<<"Object of alpha class is destroyed"<<endl;
	}
	};
	
	
class beta
{
int y;
public:
	beta(){	
cout<<"Enter the value of y"<<endl;
	cin>>y;}
	void display2()
	{
	cout<<"Entered value of y = "<<y<<endl;	
	}
		~beta()
	{cout<<"Object of beta class is destroyed"<<endl;;
	}
};


class gamma:public alpha,public beta
{
	public:
	gamma()
	{display();
	display2();
	}
		~gamma()
	{cout<<"Object of gamma class is destroyed"<<endl;;
	}
};

int main()
{
gamma g1;

return 0;
	
	
}




