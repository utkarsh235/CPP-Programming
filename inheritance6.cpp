#include<iostream>
using namespace std;
class alpha
{
    private:
    int a;
    public:
    alpha()
    {
        cout << "enter the value of a ";
        cin >> a;
    }
    ~alpha()
    {
        cout << "the value of a is"<<a;
    }
};
class beta
{
    private:
    int b;
    public:
    beta()
    {
        cout << "enter the value of b";
        cin >> b;
    }
    ~beta()
    {
        cout << "the value of b is"<< b;
    }
};
class gamma : public alpha , public beta 
{
    private:
    int c;
    public:
    gamma()
    {
    cout <<"enter the value of c";
    cin >> c;
    }
    ~gamma()
    {
        cout << "the value of c is "<<c;
    }
};
int main()
{
   gamma g1;
   return 0;
}

