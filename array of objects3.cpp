#include<iostream>
using namespace std;
class Area
{
    private:
    float a,b,c,area;
    public :
    void get()
    {
        cout << "\nenter the length and breadth of the rectangle\n";
        cin >> a ;
        cin >> b ;
    }
    void logic()
    {
        area = a*b;
        cout << "\nthe area of the rectangle is \n" << area ;
    }
};
int main()
{
    int n,i ;
    cout << "enter the number of rectangles of which you wanna find the area";
    cin >> n ;
    Area arr[n];
    for(i = 0 ; i <n ; i++)
    {
        arr[i].get();
        arr[i].logic();
    }
    return 0 ;
}
