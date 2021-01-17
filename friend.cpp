#include<iostream>
#include<string>
using namespace std ;
class human  
{
	int b,c,i,name;
	char a[50]; 
	
	public :
		void get(){
			cout << "enter the name and age of the person";
			gets(a);
			cin >> name; 
		}
		
		friend void display (human h);
};
void display(human h)
{
	cout << "the name and the age of the person entered was :" ;
	cout << h.a;
	cout << h.name ;
}
int main()
{
	human h;
	h.get();
	return 0;
}


