#include<iostream>
using namespace std;
class inch;
class meter
{
	int a,b,c;
	
	public :
		void getdata()
		{
			cout << "enter two values in meter ";
			 cin >> a  >> b;
		}
		friend void add(meter , inch);
};
class inch
{
	int a,b,c;
	
	public :
		void getdata()
		{
			cout << "enter two values in inch ";
			 cin >> a  >> b;
		}
		friend void add(meter , inch);
};

void add (meter m , inch i)
{
   meter mm;
   mm.a = m.a + (i.a)*2 ;
   mm.b = m.b + (i.b)*2 ;  
   cout << "the...\n "<<  mm.a;
   cout << "\nthe...\n" << mm.b;  	
}



int main()
{
	
	meter m1,m2;
	inch i1,i2;
	m1.getdata();
	i1.getdata();
	add(m1 , i1);
	return 0;
	
}



