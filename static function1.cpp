#include<iostream>
using namespace std;
class account 
{
	int a,b,c,i,n;
	static int roi ; 
	public :
	static void setroi(int r);
		
};
int account :: roi;
void account :: setroi(int r)
{
	roi = r;
	cout << "the value of roi is " << roi;	

}

int main()
{
	account a1, a2;
	 
    account :: setroi(5);
	return 0;
}
