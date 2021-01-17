#include<iostream>
using namespace std ;
class stud 
{
	int a,b,c,i,n;
	
	public :
		void getdata();
		friend float print();
};
void stud :: getdata()
{
	cout << "enter any two numbers ";
	cin >> a >> b ;
}
float print( stud s)
{
	c = (a + b)/2 ;
	return c ;
}
int main()
{
	 stud s ;
	 s.getdata();
	 
	 cout << "the average of the two numbers entered is" << print(stud s );
	 return 0; 
}

