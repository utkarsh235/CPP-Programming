#include<iostream>
using namespace std;
class student2;
class student1
{
	int a,b,c,i,n;
	
	public :
		void getdata()
		{
			cout << "enter the value of a ";
			cin >> a;
		}
		friend void swap(student1 , student2 );
};

class student2
{
	int a,b,c,i,n;
	
	public :
		void getdata()
		{
			cout << "enter the value of a ";
			cin >> a;
		}
		friend void swap(student1  ,student2);
};

void swap(student1 c ,student2 m)
{
    int temp ;
	temp = c.a;
	c.a = m.a ;
	m.a = temp;
	 cout << "the swapped values are " << c.a  << "\n" << m.a; 	
}


int main()
{
	
	student1 s1;
	student2 s2;
	s1.getdata();
	s2.getdata();
	swap(s1 , s2);
	
	
	return 0 ;
	
	
	
	
	
}
