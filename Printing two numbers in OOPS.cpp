#include<iostream>
using namespace std;
class student 
{
	int a,b,c;
	void printdata();
	
	public : 
	  void getdata();
};
void student :: getdata()
{
	cout << "enter two numbers \n"; 
	cin >> a >> b ;
	printdata();
}
void student :: printdata()
{
	cout << "\nthe two numbers entered were :" << a << "\t " << b ;
	cout << "THANK YOU !! ";
}

int main()
{
	
	student s1,s2;
	s1.getdata();
	s2.getdata();
	return 0;
	
	
	
	
	
}


