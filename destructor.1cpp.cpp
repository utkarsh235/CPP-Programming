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
};


int main()
{
	complex c1,c2,c3,c4;
	
	
	return 0;
}
