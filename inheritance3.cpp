#include<iostream>
using namespace std ;
class a 
{
	public :
		int x ;
		void print1()
		{
			cout << "this is the base class";
		}
};
class b : public a
{
	public :
		int y ;
		void print2()
		{
			cout << "this is the first derived class of a ";
		}
};
class c : public b
{
    public:
	int z ;
	void print3()
	{
		cout << "this is the  second derived class of a";
	}	
};
int main()
{
	c stud1;
	stud1.print1();
	stud1.print2();
	stud1.print3();
	return 0 ;
}





