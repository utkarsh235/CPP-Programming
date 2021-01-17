#include<iostream>
using namespace std ;
int main()
{
	cout << "\nenter the power which you want to calculate";
	float a,b,c,i,n;
	cin >> a;
	for (i=1;i <=a;i++)
	{
		b = (2.7) * i;
	   n = 	1/b;
	   cout << "\nfor x =" << i << "the value of y is\n " << n;
	  
	} 
	 cout << "\n where y = exp[-x]";
	 return 0;
}
