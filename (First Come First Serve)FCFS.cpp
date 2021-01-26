#include<iostream>
using namespace std;
/*void entries(int process[5], int bt[5], int at[5]);
void entries(int process[5], int bt[5], int at[5])
{
cout << "Enter the arrival time of each process";
int i = 0
for(i = 0; i < 5 ; i++)
	{
	cin >> at[i];
	}
cout << "Now enter the Burst Time of each process";
i = 0
for(i = 0; i < 5; i++)
	{
	cin >> bt[i]
	}
i = 0
cout << "the corresponding entries for processes are:"
cout << "\n\tProcess" << "\tArrival time" << "\tBurst time"
for(i = 0; i < 5; i++)
	{
	
	}
}


int main()
{
int n = 5;
//cout << "Enter the number of processes";
//cin >> n;
cout << "the number of processes are:" << 5;
int process[5], bt[5], at[5];
entries(process[5], bt[5], at[5]);

return 0;
}*/
void findsoln(int *, int *);
int main()
{
	int processes[] = { 0,1,2,3 };
	int bt[] = {5, 3, 4, 1};
	findsoln(processes, bt);
	return 0;
}
void findsoln(int *processes, int *bt)
{
	int wait_time[] = {0, 0, 0, 0};
	int comp_time[] = {0, 0, 0, 0};
	int i = 0, n = 4;
	for(i = 0; i < 4; i++)
	{
		if(bt[i] != 0)
		{
			int j = 0;
			for(j = 0; j < 4; j++)
			{
				if(bt[i] != 0 && j != i && j > i)
				{
					wait_time[j] = wait_time[j] + bt[i];
				}
			}
			for(j=0;j<n;j++){
			
			for(i=0;i<=j;i++){
			
			comp_time[j] = bt[i];
			
			}}
			bt[i] = 0;
		}
	}
	int z = 0;
	for(z = 0; z < 4 ;z++)
	{
		cout << "process"<< z << "\n\t";
		cout << "completion time:\t" << comp_time[z] << "\n\t" ;
		cout << "waiting time:\t" << wait_time[z] << "\n\t";
	}
	
}



