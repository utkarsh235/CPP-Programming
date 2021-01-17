#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofs1;
	cout << "creating a file...\n";
	ofs1.open("ofs1.dat");
	if(!ofs1)
	cout << "file open error";
	cout << "file is created";
	ofs1 << "file created MAN!!";
	ofs1.close();
	ofs1.open("ofs1.dat", ios::app);
	ofs1 << "\nfile append sucessful!!";
	ofs1.close();
	return 0 ;
}
