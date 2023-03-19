#include<iostream>
using namespace std;
# define SIZE 5
class queue{
	public:
		int a[SIZE];
		int front=-1;
		int rear=-1;
		
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

		void enqueue ( int value )
		{
		if (rear == SIZE-1)
		{
			cout<<"Queue is full \n";
		}
      else{
      	if( front == -1)
       front = 0;
       rear++;
       a[rear] = value;
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
				cout<<"element at front is : "<<a[front];
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
		}

};
int main()
{
	queue q;
	int choice,v,fl=1;
	while(fl==1)
	{
		cout<<"\n1 for enqueue\n2 for dequeue\n3 for showfront\n4 for display the queue\n";
		cin>>choice;
		switch(choice)
		{
			case 1 :{
				cout<<"enter the value you want to insert : ";
				cin>>v;
				q.enqueue(v);
				break;
			}
			case 2:{
				q.dequeue();
				break;
			}
			case 3 :{
				q.show_front();
				break;
			}
			case 4 :{
				q.display();
				break;
			}
			case 5 :{
				fl=0;
				break;
			}
		}
	}
}
