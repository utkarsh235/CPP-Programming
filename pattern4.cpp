#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,n;
	 cout << "enter the number os rows which you want";
	 cin >> n;
	 
	 for (i = 1 ; i <= n ; i++)
	 {
	 	for (a =1; a<=i ; a++)
	 	{
	 		for (a = 2 ; a <= i ; a++)
	 		{
	 			cout << "\t";
			}
	 		cout << "*";
	 		
		}
		cout << "\n";
	 }
	 return 0; 
}
