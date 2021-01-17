#include<iostream>
using namespace std ;
int main()
{
	int a,c,b,d ;
	cout << "enter a no.\n 1 for addition \n 2 for sustraction \n 3 for multiplication \n 4 for obtaining remainder\n";
    cin >> c;
   	switch(c)
	{
	    case 1: cout<< "enter first no\n";
	            cin>> a;
	            cout<< "enter second no\n";
	            cin>> b;
	            d = a+b ;
	            cout<< d;
	            break;
	    case 2:  cout<< "enter first no\n";
	            cin>> a;
	            cout<< "enter second no\n";
	            cin>> b;
	            d = a-b ;
	            cout<< d;
	            break;   
	    case 3: cout<< "enter first no\n";
	            cin>> a;
	            cout<< "enter second no\n";
	            cin>> b;
	            d = a*b ;
	            cout<< d;
	            break;     
	    case 4: cout<< "enter first no\n";
	            cin>> a;
	            cout<< "enter second no\n";
	            cin>> b;
	            d = a%b ;
	            cout<< d;
	            break;     
	}
	
	return 0 ;
}
