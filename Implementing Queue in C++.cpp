#include<stdio.h>
#include<iostream>

using namespace std;
int front = -1;
int rear = -1;
char queue[20];

void enqueue(char in)
{
	if(front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[0] = in;	
	}
	else if(front == 1 && rear == 20)
	{
		cout << "the Queue is full i.e. Overflow\n";
	}
	else
	{
		rear++;
		queue[rear] = in;
	}
}
void dequeue()
{
	if(front == 1 && rear == 1)
	{
		front = -1;
		rear = -1;
		cout << "queue is empty";
	}
	else 
	{
		front++;
	}
}

int main()
{
	while(1)
	{
		char w ;
		cout << "Do you want to Enqueue or Dequeue\n";
		cout << "Press 'e' for ENQUEUE \n Press 'd' for DEQUEUE";
		cin >> w;
		if(w == 'e')
		{
			char x;
			cout << "Enter the charactar which you want to enqueue";
			cin >> x;
			enqueue(x);
		}
		else if(w == 'd')
		{
			char t;
			cout << "Enter the charactar which you want to Dequeue";
			cin >> t;
			dequeue(t);
		}
		
	}
char input;
cin >> input;
enqueue(input);
dequeue();
    
    return 0;
}

