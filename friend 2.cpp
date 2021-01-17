#include<iostream>
using namespace std;
class number2;
class number1
{
	int a,b,c;
	
	public :
		void getdata()
		{
			cout << "enter number 1";
			cin >> a ;
			
		}
		friend void display(number1 ,number2);
};
class number2
{
	int d ,e,f;
	public :
		void takedata()
		{
			cout << "enter number two";
			cin >> d;
		}
		friend void display(number1 , number2);
};
void display(number1 n1,number2 n2 )
{
   	int temp;
   	 temp = n1.a;
   	 n1.a = n2.d ;
   	 n2.d = temp ;
   	 cout << "the swaped numbers are " << n1.a << "\n" << n2.d ;
   	 
}
int main()
{
	number1 n1;
	number2 n2;
	n1.getdata();
	n2.takedata();
	display (n1 ,n2 );
	return 0;
}



