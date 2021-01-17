#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream fetch ;
	fetch.open("myfiles.txt");
	ofstream give;
	give.open("myfiles.txt");
	while(fetch.eof())
	{
		fetch.get(ch);
	    give << ch;
	}
	return 0; 
}
