#include<iostream>
using namespace std;
int main()
{
	int a ;
	void get();
	void get(int x);
	void get(int x,int y);
	
	get();
	get(5);
	get(6 , 7);
	return 0;
	
}
void get()
{
	cout << "this is an empty overloaded function";
}
void get(int x)
{
	cout << "\n" << x;
}
void get(int x , int y)
{
	cout << "\n" << x << "\t" << y;
}




