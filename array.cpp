#include<iostream>
using namespace std;
class student 
{
	int a,b,c,i,n;
	public :
		void getdata()
		{
			cout << "enter the number of elements you wanna enter ";
			cin >> n;
		}
		int arr[n];
		void printdata() 
		{
			cout << "the elements entered were "; 
			for (i = 0 ; i < n ; i++)
			{
				cout << arr[i];
				cout << "\n";
			}
		}
};
int main()
{
	student s;
	s.getdata();
	s.printdata();
	return 0 ;
}
