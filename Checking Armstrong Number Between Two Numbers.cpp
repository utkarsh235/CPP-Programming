#include<iostream>
using namespace std;
class armstrong
{
	int a,b,c,i,n;
	
	public :
		void getnumbers();
		void print();
};
void armstrong :: getnumbers()
{
	cout << "enter two 4 digit numbers between which you want to print all the armstrong numbers\n";
	cin >> a >> b;
	
}
void armstrong :: print()
{
	for (i=a ; i<=b ; i++)
	{
		n = (i%10)*(i%10) + ((i/10)%10)*((i/10)%10) + ((i/100)%10)*((i/100)%10) + (i/1000)*(i/1000);
		if (i == n)
		{
			cout << i << "is an armstrong number\n";
		}
		else 
		{
			cout << "there does not exist any armstrong number\n";
		}
	}

}
int main()
{
	armstrong a;
	a.getnumbers();
	a.print();
	return 0;
}

