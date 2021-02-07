#include<iostream>
using namespace std;
int main()
{
	int n, max = 30, i = 0;
	cout << "Enter the number of processes";
	cin >> n;
	int processes[max], at[max], bt[max], que[max], wt[max], tat[max];
	cout << "enter the processes=> Arrival time and burst time\n";
	for(i = 0; i<n ; i++)
	{
		cout << "Arrival time of process " << i << "\n";
		cin >> at[i];
		cout << "Burst time of process " << i << "\n";
		cin >> bt[i];
		wt[i] = 0;
		tat[i] = 0;
		que[i] = bt[i];
	}
	
	/*i = 0;
	for(i=0; i<n; i++)
	{
		cout << "\nArrival time of process " << i << "\n" << at[i];
		cout << "\nBurst time of process " << i << "\n" << bt[i];
	}*/
	
	i = 0;
	for(i=0; i<n; i++)
	{
		int j = 0;
		for(j = 0; j<n ; j++)
		{
			if(bt[i] != 0 && j!=i && j>i)
			{
				wt[j] = wt[j] + bt[i];
			}
			
		}
		tat[i] = wt[i] + bt[i];
		bt[i] = 0;
	}
	i = 0;
	cout<< "the corresponding values are:\n";
	cout << "Process " << "\t" << "Arrival Time\t" << "Burst Time\t" << "Waiting time\t" << "TAT\t\n";
	for(i=0; i<n; i++)
	{
		cout << i << "\t\t" << at[i] << "\t\t" << que[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << "\t\t\n";
	}
	i = 0;
	for(i = 0; i<n ; i++)
	{
		avgwt = 0;
		avgwt = avgwt + wt[i]; 
		avgtat = avgtat + tat[i];
	}
	cout << "Average Waiting time = " << avgwt;
	cout << "averae turn around time = " << avgtat;
	return 0;
}






