#include<iostream>
using namespace std;
class shared 
{
	public :
		int  b,c;
	    static int a;
	    void get(int x ,int y)
	    {
	    	a = x;
	    	b = y;
		}
		void print()
        {
        	cout << "\nthis is static a "<< a;
			cout << "\nthis is non static b"<<b; 
		}
};
int shared :: a;
int main()
{
	shared s1,s2;
	s1.get(10,5);
	s1.print();
	s2.get(4,6);
	s2.print();
	s1.print();
	return 0;
}
