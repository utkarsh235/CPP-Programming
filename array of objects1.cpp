#include<iostream>
using namespace std;
class Array
{
	private : 
	int a,b,c,i,n;
	public :
	void get()
	{
		cout << "enter any number";
	    cin >>a ;
	}
	void print()
	{
		cout <<  a;
	}
};
int main()
{
	int i;
	Array arr[3];
	for (i = 0 ; i< 3 ; i++)
	{
		arr[i].get();
	}
	cout << "the numbers entered were" ;
	for (i = 0 ; i< 3 ; i++)
	{
		arr[i].print();
	}
return 0;
}
