#include<iostream>
using namespace std;
int main(int argc , char* argv[])
{
	int i;
	cout << "enter the number of arguments";
	cin >> argc;
	for(i=0;i<argc;i++)
	{
		cout << "\nthis is argument number" << i; 
		cout << " -> " ;
		cin >> argv[i];
		cout << argv[i];
	}
	return 0;
}
