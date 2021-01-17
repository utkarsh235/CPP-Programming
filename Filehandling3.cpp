#include<iostream>
#include<fstream>
using namespace std;
class memory
{
	int a,b,c;
	public :
	void get()
	{
    ofstream o;
    o.open("myfile.txt");
    o<< "hello world";
    o.close();
    }
    void print()
    {
    	char a;
    	ifstream i;
    	i.open("myfile.txt");
    	while(!i.eof())
    	{
    		a = i.get();
    		cout << a ;
		}
		i.close();
	}
};
int main()
{
	memory m1;
	m1.get();
	m1.print();
	return 0;
}
