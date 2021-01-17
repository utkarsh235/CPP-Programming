#include<iostream>
using namespace std;
class are
{
	int a,b,r,i,n;
	public:
	void area(int , int );
	void area(int );
	 
};
void are::area(int a,  int b )
{
   cout << "enter the height and breadth of the triangle";
   cin >> a >> b	;
   float c;
   c = (1/2)*a*b;
   cout << "the area of the triangle is " << c; 
} 
void are :: area(int a)
{
	float c;
	cout << "enter the radius of the circle";
	cin >> a;
	c = (3.14)*a*a;
	cout << "the area of the circle of radius" << a <<"is" << c;
}
int main ()
{
	are m;
	m.area(int);
	m.area(int , int);
	return 0;
}
