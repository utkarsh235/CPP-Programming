#include<iostream>
using namespace std;
class complex
{ public : 
	complex(int a)
	{
      cout <<"the value of complex a is" << a;		
	}
};
class complex1 : public complex 
{
	public :
		complex1(int b)
		{
			b =10;
		}
};
int main()
{
	complex1 obj(4);
	return 0;
}
