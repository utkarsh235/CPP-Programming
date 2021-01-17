#include<iostream>
using namespace std ;
class poison2;
class poison1
{
	int a,b;
	public :
		void getdata()
		{
			cout <<"enter two numbers" ;
			cin >> a >> b;
 		}
   	friend class poison2 ;
};
class poison2
{
   int c,d;
   public :
      void printdata(poison1 p1)	
      {
      	cout << "the numbers entered were:" << p1.a << p1.b;
	  }
};

int main()
{
	poison1 p1;
	poison2 p2;
	p1.getdata();
	p2.printdata(p1);
	return 0 ;
}
 

