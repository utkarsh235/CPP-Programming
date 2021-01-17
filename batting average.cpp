#include<iostream>
using namespace std;
class average
{
	int a,b,c,i,n;
	char name[100];
	
	public :
		int run,inning,nout;
		void data();
		void runs();
		void innings();
		void notout();
		void display();
};
void average :: data()
{
	cout << "enter player name";
	cin >> name;
}
void average :: runs()
{
	cout << "enter the runs of the player";
	cin >> run;
}
void average :: innings()
{
	cout << "enter the number of innings played by the batsman";
	cin >> inning;
}
void average :: notout()
{
	cout << "enter the innings in which batsman is not out ";
	cin >> nout;
}
void average :: display()
{
	float baverage;
	int out ;
	out = inning - nout ;
	baverage = run / out ;
	cout << "the batting average of the batsman is" << baverage ;
}

int main ()
{
	average a,b;
	a.data();
	a.runs();
	a.innings();
	a.notout();
	
	
	b.data();
	b.runs();
	b.innings();
	b.notout();
	a.display();
	b.display();
	
	
	return 0;
	
}
