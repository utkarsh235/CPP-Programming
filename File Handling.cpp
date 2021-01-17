#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream off3;
    off3.open("i_am_classic.txt",ios::out);
    off3 << "i am classic as fuck!!";
    off3.close();
    return 0;
}
