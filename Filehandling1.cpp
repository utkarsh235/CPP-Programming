#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream if1;
	if1.open("Myfile.dat");
	while(!if1.eof())
	{
		char ch = if1.get();
		cout << ch ;
	}
	if1.close();
}
