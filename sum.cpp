#include <iostream>
using namespace std ;
class sum 
{
	int a, b, i , add  ;
	add = 0 ;
	
	
	
	public :
		void getnumbers (void);
		void printsum (void);

};

void sum :: getnumbers()
{
	cout << "enter the no.'s between which you want the sum";
	cin >> a;
	cin >> b;
}
void sum :: printsum ()
{
	for (i=a;i=b;i++)
	{
		add =add +i;
	}
	cout << "the sum of no.'s entered was"<< add;
}
int main ()
{
	sum s;
	s.getnumbers();
	s.printsum();
	return 0 ;
	
}
