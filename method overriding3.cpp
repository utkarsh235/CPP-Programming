#include<iostream>
using namespace std;
class a 
{
	int c;
	public :
		void get()
		{
			cout << "this is class a";
		}
};
class b : public a
{
	int d;
	public:
		void get()
		{
			cout << "this is class b";
	        a :: get();
		}
};
int main()
{
    b obj;
    obj.get();
    return 0;
	
}





