#include<iostream>
using namespace std ;
class student 
{
	int a,b,c;
	
	public :
		void getdata()
		{
			cout << "enter two numbers " ;
			cin >> a  >> b;
		}
		void showdata()
		{
			cout  << "the numbers entered were " << a <<"\t" << b;
		}
		
};

int main()
{
	student s , *p;
	p = &s;
	s.getdata();
	p->showdata();
	return 0;
}
