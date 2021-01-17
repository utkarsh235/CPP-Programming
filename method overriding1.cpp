#include<iostream>
using namespace std;
class a 
{
	public :
		int c ;
		virtual void get()
		{
			cout << "this staement is in class a";
		}
};
class b : public a
{
	public :
		void get()
		{
			cout << "this statement is in class b" ;
		}
};
int main()
{
	a *ptr, o2;
	b o1;
	ptr = &o1;
	ptr->get();
	return 0;
	
	
	
}
