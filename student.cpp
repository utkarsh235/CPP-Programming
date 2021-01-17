#include <iostream>
#include <cstring>
using namespace std;
class student 
{
	int rollno;
	char name[20];
	
	
	
	public :
		void getdata();
		void printdata();
		
};

void student :: getdata()
{
	cout << "\nenter the name of student" << endl;
	gets (name);
	cout << "\nenter the roll no" << endl ;
	cin >> rollno;
	
}
void student :: printdata()
{
	cout << "the name entered was" << name ;
	cout << "the roll no entered was" << rollno;
	
}

int main ()
{
	student s1,s2 ;
	s1.getdata();
	s1.printdata();
    s2.getdata();
	s1.printdata();
	return 0 ;
}
