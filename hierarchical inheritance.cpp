#include<iostream>
using namespace std ;
class a 
{
	public :
		int a ;
		void showdata()
		
		{
			cout << "hello folks !!";
		}

};

class b : public a
{
	
};
class c : public a
{
	
};


int main()
{
    	class c xx;
    	class b yy;
    	xx.showdata();
    	yy.showdata();
    	return 0 ;
}



