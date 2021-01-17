#include<iostream>
#include<cstring>
using namespace std ;
class sentence 
{
	char c[50];
   
     public :   
   	void getsentence(void);
	void printsentence(void);
};

void sentence :: getsentence()
{
	cout << "enter any string";
	gets (c) ;
}
void sentence :: printsentence()
{
	cout << "the string entered was " << c ;
}
int main ()
{
	sentence s;
	s.getsentence() ;
	s.printsentence();
	return 0; 
	 
}
