#include<iostream>
using namespace std;
class convert 
{
	public :
		int a,b,c;
	public :
		void increment(convert &obj)
		{
			obj.a = obj.a * 2;
			cout << "the value in increment is"<< obj.a;
		}
};
int main()
{
	convert c1;
	c1.a = 3;
	c1.increment(c1);
    cout << "the value in main is"<< c1.a;
    return 0 ;
}
