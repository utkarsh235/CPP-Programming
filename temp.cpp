#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp,final_temp,initial_temp,day;
	int factor;
	for (day = 1,factor = 1; day<=10 ; day++)
	{
		factor = factor *2;
	}
	initial_temp = 13312 / factor;
	return 0;
}
