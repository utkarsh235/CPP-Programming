#include<iostream>
using namespace std;
int main ()
{
	int a ;
	char c ;
	cout << " enter a charactar";
	cin >> c ;
	a = c ;
	if (a==65 ||69||73||79||85)
	{
		cout << "the entered charactar is a vowel"; 
	}
	else 
	{
		cout  << "the entered charactar is a consonant";
	}
	return 0; 
}
