#include<iostream>
using namespace std;
class a
{
 public:
 virtual void get()
 {
 	cout << "this is of class a";
 }	
 void set()
 {
 	cout << "\nthis is set of class a";
 }
};
class b : public a
{
	public:
	void get()
	{
		cout << "\nthis is of class b";
	} 
};
int main()
{
	a  *p,o1;
	b o2,*q;
	p = &o2;
	o1.get(); // get function of class a is called
	o2.get(); // get function of class b is called
	o2.get(); // get function of class b is called
	p->get(); // get function of class a is called  // due to early binding
	return 0;
}
