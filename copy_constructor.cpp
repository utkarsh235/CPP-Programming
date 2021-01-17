#include<iostream>
using namespace std;
class complex 
{
	public :
		int p,a,b,c;
		complex()
		{
			cout << 10<<"\n";
		}
		complex(int x)
		{
            a = 15;
			cout << 20<<"\n";
		}
        complex(complex &obj)
        {
        	p = obj.a;
        	cout << p;
		}
};
int main()
{
	complex c1() , c2(30), c3(c2);
    return 0 ;
}

