#include<iostream>
using namespace std;
class box
{
	int a,b,c;
	public :
		void getbox();
	private :
		void printbox();
};
void box :: getbox()
{
	cout << "this is a box \n";
	printbox();
}
void box :: printbox()
{
	cout << "this is called in getbox";
}
int main()
{
	box b1;
	b1.getbox();
	return 0;
}
