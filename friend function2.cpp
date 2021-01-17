#include<iostream>
using namespace std;
class poison 
{
	int a,b;
	public :
		void getval()
		{
			cout << "enter two numbers ";
			cin >>a >> b;
		}
		friend void printval(poison );
};
void printval(poison p)
{
	cout << "the values entered were " << p.a << p.b;
}
int main()
{
	poison p1;
	p1.getval();
	printval(p1);
	return 0 ;
}
