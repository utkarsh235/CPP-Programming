#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i,pos;
	fstream print ;
	fstream take;
	print.open("open.txt",ios::out| ios::app);
	print << "this is Bro's second document.The first one got some compile error";
	print.close();
	
	take.open("open.dat",ios::in);
	char cha[5];
    cout << take.tellg();
	while(!take.eof())
	{
		cout << "hello";
	    cout << take.getline(cha,5);
    }
	take.close();
	
	return 0 ;
}
