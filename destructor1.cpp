#include<iostream>
using namespace std;
class complex 
{
	int a,b,c,i,n;
	
	public :
		complex ()   // this is our constructor 
		{ 
	      cout << "this is my constructor\n";	
		}
		~complex()    // this is our destrctor
		{
			cout << "this is my destructor \n ";
		}
		void setdata()
		{
			complex c;
			cout << "this is a destructor and this ends as the object dies";
		}
};


int main()
{
	complex c1,c2,c3,c4;
	c1.setdata();
	
	
	return 0;
}
