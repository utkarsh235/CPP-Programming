#include<iostream>
using namespace std;
class STRING
{
	public :
		char a[50];
		void get()
		{
			cout << "enter a string\n";
			cin >> a;
		}
		STRING operator ==(STRING s1)
		{ 
		    if( a == s1.a)
			{
				cout << "the strings are equal";
			}
			else 
			cout << "strings are unequal"; 
		}
};
int main()
{
	STRING s1,s2;
	s1.get();
	s2.get();
	s2==s1;
	return 0 ;
}
