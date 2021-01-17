#include<iostream>
using namespace std;
class factors 
{
	int a,b,c,i,n;
	
	public:
		void get();
		void print();
};
void factors :: get()
{
	cout << "enter the number whose prime factors you want to enter\n";
	cin >> n;
}
void factors :: print()
{
	for (i=1; i<=n ; i++)
	{
		if (n%i == 0)
		{
			cout << i << "is a factor of" << n <<"\n";
		}
	}
}

int main()
{
	factors f;
	f.get();
	f.print();
	return 0;
}
