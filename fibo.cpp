#include<iostream>
using namespace std ;
int main()
{
	int a,b,n,i , t0 = 0 , t1 = 1,nextterm;
	
	cout << "enter the number of terms";
	cin >> n;
	cout << "the fibonacci series is as follows :\n";
	for (i=0;i<=n;++i)
	{
		if (i==0)
		{
			cout << 0;
			continue;
		}
		if (i==1)
		{
			cout << 1;
			continue;
		}
		nextterm = t0 + t1 ;
		t0 = t1;
		t1 = nextterm;
		
	}

return 0;
}

