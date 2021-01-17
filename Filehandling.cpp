#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream of1;
	of1.open("Myfile.dat");
	of1 << "hello folks!!";
	of1.close();
}
