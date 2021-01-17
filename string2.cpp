#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[10] , s2[10], *s3;
    cout << "enter two strings\n";
	gets(s1);
	gets(s2);	
	s3 = new char[20];
	s3 = strcat(s1,s2);
	cout << "the value of s3 is " << s3;
	return 0 ;
}
