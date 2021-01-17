#include<iostream>
#include<cstring>
using namespace std;
class STRING
{
    private:
    int a,b,c;
    public:
    char str1[50] , str2[100];
    public:
    void get()
    {
        cout << "enter string\n";
        cin.getline(str1,50);
    }
    void operator ==(STRING s)
    {
    	bool l = strcmp(str1,s.str1);
        if(l==1)
        {
            cout << "\nthe strings are equal";
        }
        else 
        cout << "the strings are not equal";
    }
    void operator +(STRING st)
    {
        strcat(str1,st.str1); 
        cout << "the concatinated string is" << str1;
    }
};
int main()
{
    STRING s1,s2;
    s1.get();
    s2.get();
    s1==s2;
    s1+s2;
    return 0;
}
