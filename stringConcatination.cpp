#include<iostream>
#include<cstring>
#include<string>
using namespace std;
class str1
{
    public:
    char a1[10];
    public:
    void get()
    {
        cout << "enter a name";
        cin >> a1;
    }
};
class str2
{
    public:
    char a2[10];
    public:
    void get()
    {
        cout << "enter the surname";
        cin >> a2;        
    }
};
class str3 : public str1 , public str2
{
    public:
    char a3[20];
    public:
    void print()
    {
        strcat(a1,a2) ;
        cout << "the value of concatinated string is " << a1 ;
    }
};
int main()
{
    str3 s3;
    s3.str1:: get();
    s3.str2:: get();
    s3.print();
    return 0 ;
}
