#include<iostream>
using namespace std;
class student
{
	public:
	char name[50];
   virtual int get_name()
   {}
   virtual int print_name()
   {}
};
class science : public student
{
	public:
	int get_name()
	{
		cout << "\nenter student name for science";
		cin.getline(name,50);
	}
	int print_name()
	{
		cout << "\nthe name of science student entered is" << name;
	}
};
class arts : public student
{
	public:
	int get_name()
	{
		cout << "\nenter student name for arts";
		cin.getline(name,50);
	}
	int print_name()
	{
		cout << "\nthe name of arts student is" << name;
	}
};
class commerce : public student 
{
	public:
	int get_name()
	{
		cout << "\nenter student name for science";
		cin.getline(name,50);
	}
	int print_name()
	{
		cout << "\nthe name of commerce student is" << name;
	}
};
int main()
{
	science s1;
	arts a1;
	commerce c1;w
	s1.get_name();
	a1.get_name();
	c1.get_name();
	return 0;

}