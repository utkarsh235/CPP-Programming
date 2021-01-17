#include<iostream>
#include<cmath>
using namespace std;
class calculator
{
	int a,b,c,i,n;
	
	public :
		void add();
		void multiply();
		void mod();
		void absolute();
		void logarithm();
		void power();
		void exp();
		void trigo();
};

void calculator :: add()
{
	int sum = 0;
	int arr[100];
	cout << "enter the number of numbers you want to add\n";
	cin >> n;
	cout << "enter the numbers\n";
	for (i=0 ; i<n; i++)
	{
		cin >> arr[i];
	}
	for (i=0 ;i<=n;i++)
	{
		sum = sum + arr[i];
	}
	cout << "the sum of the numbers that you entered is\n" << sum;
}
void calculator :: multiply()
{
	int arr[i];
	int product = 1;
	cout << "enter the number of numbers that you want to multiply\n";
	cin >> n ;
	cout << "enter the numbers\n";
    for (i=0 ; i<n; i++)
    {
    	cin >> arr[i];
	}
	for (i=0; i<n ; i++)
	{
		product = product * arr[i];
	}
	cout << "the product of the numbers that you entered is \n" << product ;
}
void calculator :: mod()
{
	int modu;
	cout << "enter two numbers a and b such that mod = a%b \n";
	cin >> a >>b ;
	modu = a%b;
	cout << "the modulous of the numbers you entered is \n" << modu ;
}
void calculator :: absolute()
{    unsigned int c;
     
	cout << "enter a number whose absolute value you want to calculate \n";
	cin >> a;
	c = a ;
	cout << "the absolute value of the number that you entered is\n" << c ;
}
void calculator :: logarithm()
{
	float a , b;
	cout << "enter the number whose log you want to calculate\n";
	cin >> n;
	a = log(n);
	b = a/2.303;
	cout << "the log of the number that you inserted is \n" << b ;
}
void calculator :: power()
{
	int i = 1;
	cout << "enter the number a and b such that you want to calculate a^b \n";
	cin >> a >> b;
	for(n=0 ;n < b ; n++)
	{
		i = i*a;
	}
	cout << "\n" << a << "to the power " << b << "is " << i;
}
void calculator :: exp()
{
	float i = 1;
		cout << "enter the number whose exponent you want to calculate\n";
		cin >> a;
		for (n=0; n<a;n++)
		{
			i = i * (2.7);
		}
		cout << "the exponent of the number that you entered is\n" << i; 
}
void calculator :: trigo()
{
	int c;
	cout << "enter an appropriate option :\n";
	cout << "1. to calculate sin\n";
	cout << "2. to calculate cos\n";
	cout << "3. to calculate tan\n";
	cout << "4. to calculate cot\n";
	cout << "5. to calculate sec\n";
	cout << "6. to calculate cosec\n";
	
	cin >> c;
	
	switch(c)
	{
		case 1 : 
		{
	     cout << "enter the number whose sin you want to calculate\n";
		 cin >> a; 
		 cout << "the sin if the number entered is \n" << sin(a);	
		 break;	
		}
		case 2:
	    {
		cout << "enter the number whose cos you want to calculate \n";
	    cin >> a; 
        cout << "the cos if the number entered is \n" << cos(a);	
        break;
		}
		case 3:
		{
		cout << "enter the number whose tan you want to calculate \n";
	    cin >> a; 
        cout << "the tan if the number entered is \n" << tan(a);	
        break;
		}
		case 4 :
		{
			float cot;
		cout << "enter the number whose cot you want to calculate \n";
	    cin >> a; 
	    cot = 1/tan(a);
        cout << "the cot if the number entered is \n" << cot ;	
        break;
		}
		case 5 :
		{
			float sec;
		cout << "enter the number whose sec you want to calculate \n";
	    cin >> a; 
	    sec = 1/cos(a);
        cout << "the sec if the number entered is \n" << sec;	
        break;
		}
		case 6 :
		{
			float cosec;
		cout << "enter the number whose cosec you want to calculate \n";
	    cin >> a; 
	    cosec = 1/sin(a);
        cout << "the cosec if the number entered is \n" << cosec;	
        break;	
		}	
		default :
		{
			cout << "invalid option\n";
			break;
		}
   }
}

int main()
{
	int c ;
	calculator w;
	do
	{
	
	cout << "enter an appropriate option :\n";
	cout << "1. to add \n";
	cout << "2. to multiply\n";
	cout << "3. to calculate mod\n";
	cout << "4. to find absolute value\n";
	cout << "5. to calculate log of any number\n";
	cout << "6. to calculate power of any number\n";
	cout << "7. to calculate exponent of any number\n";
	cout << "8. to calculate sin, cos, tan and other trigonometric functions\n";
	cout << "9. to exit\n";
	
	cin >> c;
	
	switch (c)
	{
		case 1:
			{
				w.add();
				break;
			}
			case 2:
			{
				w.multiply();
				break;
			}
			case 3:
			{
				w.mod();
				break;
			}
			case 4:
			{
				w.absolute();
				break;
			}
			case 5:
			{
				w.logarithm();
				break;
			}
			case 6:
			{
				w.power();
				break;
			}
			case 7:
			{
				w.exp();
				break;
			}
			case 8:
			{
				w.trigo();
				break;
			} 
			case 9:
			{
				exit (1);
			}	
			
	         		
	}
	
}while (c !=0);
return 0;
}







