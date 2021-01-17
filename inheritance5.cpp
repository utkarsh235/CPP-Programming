#include<iostream>
#include<cstring>
#include<stdlib>
#include<string>
using namespace std;
class str1
{
    private: 
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
    private:
    char a2[10];
    public:
    void get()
    {
        cout << "enter the surname";
        cin >> a2;        
    }
}
class str3 : public str1 , public str2
{
    private:
    char a3[20];
    public:
    void print()
    {
        str3 = str1 + str2 ;
        cout << "the value of concatinated string is " << str3 ;
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