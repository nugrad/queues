#include <iostream>
using namespace std;
#define SIZE 5
int a[SIZE];
int front = -1;
int rear = -1;
bool isempty()
		{
			if(front==-1 && rear==-1)
			{
				return true;
			}
			else{
				return false;
			}
		}

void enqueue(int val)
		{
			if (rear == SIZE-1)
		{
			cout<<"Queue is full \n";
		}
      else{
      	if( front == -1)
       front = 0;
       rear++;
       a[rear] = val;
	  }
		}
void dequeue()
		{
			if(isempty())
			{
				cout<<"queue is empty ! ";
			}
			else{
				if(front==rear)
				{
					front=rear=-1;
				}
				else{
					front++;
				}
			}
		}
void show_front()
		{
			if(isempty())
			{
				cout<<"queue is empty ! ";
			}
			else{
				cout<<"\nelement at front is : "<<a[front];
			}
		}
void display()
		{
			if(isempty())
			{
				cout<<"queue is empty ! ";
			}
			else{
				for(int i=front;i<=rear;i++)
				{
					cout<<a[i];
				}
			}
			cout<<"\n";
		}

int main()
{
 
 cout<<"Inserting elements in queue\n";
 enqueue(2);
 
 enqueue(3);
 
 enqueue(5);
 
 enqueue(7);
 display();
 

 


 show_front();

 cout<<"\nRemoving elements from queue\n";
 
 dequeue();
 cout<<"\n";
 
 dequeue();
 
 dequeue();
 
 dequeue();
 dequeue();
 display();
}
