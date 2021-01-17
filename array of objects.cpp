#include<iostream>
using namespace std;
class area 
{
	int a,b,c,l;
	
	public : 
	  void getdata()
	  {
	  	cout << "\nenter the length and breadth of the rectangle\n";
	  	cin >> l >> b;
	  }
	  void showdata()
	  {
	  	cout << "\nthe area of the rectagle is: " << l*b;
 	  }
};
int main()
{
	int n,i;
	cout << "\nenter the number of triangles whose area youn wanna find\n";
	cin >> n;
	
	area a1[n];
	for (i= 0 ; i<n ; i++)
	{
		a1[i].getdata();
		a1[i].showdata();
	}
	
	return 0;
}
