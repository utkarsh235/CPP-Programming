#include<iostream>
using namespace std ;
class fibonacci
{
	int a,b, i, n ;
	
	public:
		void getnumber();
		void print();
		void fibo(int n);
};
void fibonacci:: getnumber()
{
	cout << "enter the number of terms";
	cin >> n ;
}

void fibonacci :: fibo(n);
{
	fibo(0) = 0;
	fibo(1) = 1;
	fibo(n) = fibo(n-1) fibo(n-2);
	
}

void fibonacci :: print()
{
	fibo (n);
	cout << "\nthe fibonacci series is as follows:\n";
	cout << fibo(n);
}


int main ()
{
	fibonacci f;
	f.getnumber();
	f.print();
	return 0;
}
