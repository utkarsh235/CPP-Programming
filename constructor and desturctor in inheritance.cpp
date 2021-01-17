#include<iostream>
using namespace std;
class ass
{
	public :
	     ass()
	     {
	     	cout << "this is the constructor of ass\n";
		 }
		 ~ass()
		 {
		 	cout << "this is the destructor of ass\n";
		 }
};

class fcuk : public ass
{
      public :
	     fcuk()
		 {
		     cout << "this is the constructor of fcuk\n"; 	
		 }	
		 ~fcuk()
		 {
		 	cout << "this is the destructor of fcuk\n";
		 }
};

int main()
{
	fcuk f;
	return 0;
}
