#include<iostream>
using namespace std ;
class special 
{
		int a;
	char b ;
	char c[3];
	float d;
	
	public:
	void supreme(void);
};
void special :: supreme()
{
		cout << "the size of a,b,c,d are :"<< sizeof(a) <<"\n"<< sizeof(b) <<"\n" << sizeof(c) <<"\n" << sizeof(d);
}
int main ()
{
	special s ;
	s.supreme;
	return 0;
}
