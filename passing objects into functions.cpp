#include<iostream>
using namespace std;
class convert 
{
	public :
	int a,b;
	public :
		void increment(convert obj)
		{
			obj.a = obj.a *2;
			cout << "the value of obj in class is  " << obj.a;
			
		}
};
int main()
{
	convert obj1 ,obj2;
	obj1.a = 2;
	obj1.increment(obj1);
    cout << "the value of obj is "<< obj1.a;
	return 0;
}
