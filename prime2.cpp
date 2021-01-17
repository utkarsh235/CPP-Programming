#include<iostream>
using namespace std ;
class prime 
{
	int a,b,c,i,n,count ;
	
	public :
		void get();
		void logic();
		
}p;
void prime :: get()
{
	cout << "enter two numbers between which you want to find prime numbers";
	cin >> a >> b ;
}
void prime :: logic()
{
	for (i = a; i <= b;i++)
	{
		for (c =2 ;c<i ; c++)
		{
			if (i%c == 0)
			{
				count++;
			}
		
		}
			if (count > 0)
			{
			  cout << i <<"is not a prime number\n";
			  
		    }
		if (count == 0)
		{
		cout << i << "is a prime number\n";
		} 
		count = 0;
	}
	
	}
int main()
{
 p.get();
 p.logic();
 return 0;
 } 





