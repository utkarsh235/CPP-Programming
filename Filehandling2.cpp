#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream of1;
	of1.open("Myfile.dat",ios::app);
	int position ;
	position = of1.tellp();
	cout << position ;
	of1 << " how are you";
	position = of1.tellp();
	cout << position;
	of1.close();
	
	ifstream if1;
	char ch;
	if1.open("Myfile.dat");
	position = if1.tellg();
	cout << "\n " << position;
	if1 >> ch;
	position = if1.tellg();
	cout << position;
	if1.close();
	return 0 ;
}
