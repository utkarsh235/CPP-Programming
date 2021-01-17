#include <iostream>
#include<string>
using namespace std ;
class bank
{
    string nameofdepositor ;
    int accountnumber , amount ,f, balance ,cash ,h;
    string typeofaccount ;
    
    public :
    	details();
    	deposit();
    	withdraw();
    	display();
};

 bank :: details()
{
	cout << "\nenter the name of depositor ";
	getline (cin,nameofdepositor);
	cout << "\nenter account number";
	cin >> accountnumber ;
	cout << "\nenter the type of account : current or savings" ;
	getline (cin,typeofaccount);
	cout << "\nthe initial amount in your account is";
	cout << "\n1500";
	deposit();
	
}

 bank :: deposit()

{
	cout << "\nenter the amount you want to enter in your account ";
	cin >> amount ;
	f = amount + 1500;
	cout << "\nthe final balance in your account is " << f;
	withdraw();
}

 bank :: withdraw()
{
	cout << "\nenter the amount you want to withdraw " ;
	cin >> cash ;
	if (cash >= amount ) 
	{
		cout << "\ninvalid option";
		
	}
	else 
	cout << cash << "\nhas been withdrawn from your account ";
	h = f - cash ;
	cout << "\nthe amount left in your account is " << h;
	display();
}

 bank :: display()
{
	cout << "\nthe name of the account is " << nameofdepositor;
	cout << "\nthe amount in your account is" << h ;
}

int main ()
{
	bank b1 ;
	    b1.details();
    	
}
