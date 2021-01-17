#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,n;

for (i=1; i<= 9; i++)
{
	if( a>=1  && a <= 5)
	{
	  for (a=1; a<=5;a++)
	  {
        for (b=1 ; b<=a ; b++)
        {
        	cout << "*";
		}
		cout << "\n";
	  } 
	  
	} 
	else {
		for (a=5; a>=1 ; a--)
		{
		    for (b=5; b>=a ;b--)
		    {
		    	cout << "*";
			}
			cout << "\n";
		}
        }
	
}
return 0;
	
}
