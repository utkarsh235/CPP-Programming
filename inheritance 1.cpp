#include<iostream>
using namespace std;
class stud1
{
	
	public :
		int a;
		void getdata()
		{
			cout << "enter the value of a ";
			cin >> a;
		}
};
class stud2 : public stud1 
{
	
	public :
		int b;
		void showdata()
		{
			cout << "the value of a entered is " << a;
		       b = a;
		}
};
class stud3 : public stud1 , public stud2
{
	public :
	void print()
	{
		showdata();

    }
};
int main()
{
	stud3 obj;
	obj.getdata();
	obj.showdata();
	obj.print();
	return 0 ;
}










