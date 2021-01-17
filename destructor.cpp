#include<iostream>
using namespace std ;
class student 
{
	int a,b,c;
	
	public :
		~student()
		{
			cout << "hello utkarsh gupta\n heeee";
		}
};
void fun()
{
	cout << "hello utkarsh\n";
    student obj;
}
int main()
{
	fun();
	return 0 ;
}
