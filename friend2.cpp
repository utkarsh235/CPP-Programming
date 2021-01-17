#include<iostream>
using namespace std;
class stud2;
class stud1
{
	int a,b,c,i,n;
	
	public : 
	void get1();
	friend void print(stud1 , stud2);
};

void stud1 :: get1()
{
	cout << "enter two numbers";
	cin >> a >> b ;
}
class stud2
{
	int d,e,f;
	public :
	void get2();
	friend void print(stud1 , stud2);
};

void stud2 :: get2()
{
	cout << "enter two more numbers";
	cin >> d >> e;
}
void print(stud1 s1 , stud2 s2)
{
	cout << "the addition of all four numbers are" << s1.a + s1.b + s2.d + s2.e ;
}

int main()
{
	stud1 s1;
	stud2 s2;
	s1.get1();
	s2.get2();
	print(s1 , s2);
	
	return 0 ;
}




