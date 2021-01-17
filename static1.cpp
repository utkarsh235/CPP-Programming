#include<iostream>
using namespace std; 
class abc
{
   int a,b,c,i,n;
   static int count ;
   public :
   void get();
   void print();	
};
void abc :: get()
{
	cout << "\nenter any number";
	cin >> a;
}
void abc :: print()
{
	cout << "\nthe number entered was" << a;
	count ++ ;
	cout << "the value of count is" << count; 
}
int abc :: count ;
int main ()
{
   abc s1,s2,s3;
   
   s1.get();
   s1.print();
   s2.get();
   s2.print();
   s3.get();
   s3.print();
   
   return 0 ;
   	
}






