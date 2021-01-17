#include<iostream>
#include<fstream>
using namespace std;
class name
{
	int a,b,c;
	public : 
	void get()
	{
		ifstream if2;
		if2.open("myfile.txt");
		char b;
		while(if2.eof())
		{
			b = if2.get();
			cout << b ;
		}
		if2.close();
	}
} ;
int main()
{
	name n1;
	n1.get();
	return 0 ;
}
