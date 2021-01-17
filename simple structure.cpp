#include<iostream>
using namespace std;
struct info
{
	char name[50];
	int rollno;
	float marks;
};
int main()
{
	info i;
	 
	cout << "enter details of student \n ";
	cout << "enter the student name\n";
	gets(i.name);
	
	cout << "enter the roll no. of the student \n";
	cin >> i.rollno;
	
	cout << "enter the marks obtained by the student \n";
	cin >> i.marks;
	
	cout << "the student details are \n" << "name : \n" << i.name << "rollno. :\n" << i.rollno << "marks \n" << i.marks ;
	
	return 0 ;
}
