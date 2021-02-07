#include<iostream>
using namespace std;
class student 
{
	int a,b,c;
	public :
		template <class z , class w>
		w max(z x , w y)
		{
			if (x > y)
			{
				cout << x << "is maximum";
			return x;
		    }
			else 
			{
				cout << y << "is maximum";
			return y;
			}
		}
};
int main()
{
	char j = 'j' , k = 'A';
	student s1;
	s1.max(5,6);
	s1.max(5.6 , 6.5);
	s1.max(k,66);
}
