#include<iostream>
using namespace std ;
class employee
{
	int a,b,c,i,n,age;
    char id[20] , name[40] ,salary[15] ;
void employee_id();
void employee_name();
void employee_age();
void employee_salary();

	public :
		void input_info();
		void display_info();
};
void employee :: input_info()
{

	cout << "\npress 1 if you want to input or alter employee id ";
	cout << "\npress 2 if you want to input or alter employee name ";
	cout << "\npress 3 if you want to input or alter employee age ";
	cout << "\npress 4 if you want to input or alter employee salary ";
	cout << "\npress 5 to exit";
	cin >> c;
	switch(c)

{
		case 1:
		{
			employee_id();
			break ; 
		}
	case 2 : 
	    {
	    	employee_name();
	    	break ;
		}
	case 3 : 
	    {
	        employee_age();	
	        break ;
		}	
	case 4 :
	    {
	    	employee_salary();
	    	break;
		}
	default :
	    {
	       break;    	
	    }		
	}


}

void employee :: display_info()
{
	cout << "\nthe details of the person are";
	cout << "\nthe id of the employee is  " << id ;
	cout << "\nthe name of the employee is  " << name ;
	cout << "\nthe age of the employee is  " << age ;
	cout << "\nthe salary of the employee is  " << salary ;
	
}

void employee :: employee_id()
{
	cout << "\nenter the id of the employee";
	gets (id);
}

void employee :: employee_name()
{
	cout << "\nenter the name of the employee";
	gets (name);
}

void employee :: employee_age()
{
	cout << "\nenter the age of the employee";
	cin >> age;
}

void employee :: employee_salary()
{
	cout << "\nenter the id of the employee";
	gets (salary);
}
int main()
{
	int i , n , c;
	cout << "\nenter the number of employees that you have in your company";
	cin >> n;
	employee emp[n];
	
	cout << "\nenter the number of the employee whose info you wanna alter or display";
	cin >> i;
	
	cout << "\npress 1 if you want to input or alter some information";
	cout << "\npress 2 if you want to display current informaton";
	cin >> c ;
	switch (c)
	{
	
	case 1 : 
	{
	   emp[i].input_info();	
	   break ;
	}
	case 2 :
	{
	   emp[i].display_info(); 
	   break ;		
    }
    }
    return 0 ;
}






