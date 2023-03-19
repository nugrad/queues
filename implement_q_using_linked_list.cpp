#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*link;// next
};
class ll{
	public:
		node*front;// head
		node*rear;// tail
		void enqueue(int val)// insert at tail
		{
			node*element=new node();
			element->data=val;
			element->link=NULL;
			if(front==NULL)
			{
				front=element;
				rear=element;
			}
			else{
				node*ptr=front;
				while(ptr->link!=NULL)
				{
					ptr=ptr->link;
				}
				ptr->link=element;
			}
			
		}
		void dequeue()// delete at head
		{
			if(front==NULL && rear==NULL)
			{
				cout<<"queue is empty ! ";
			}
			else{
				node*temp=front;
				front=front->link;
				delete temp;
			}
		}
		void showtop()
		{
		if(front==NULL && rear==NULL)
			{
				cout<<"queue is empty ! ";
			}
		else{
			cout<<"element at front is  : "<<front->data;
		   }		
		}
		void display()
		{
			if(front==NULL && rear==NULL)
			{
				cout<<"queue is empty ! ";
			}
			else{
				node*ptr=front;
				while(ptr!=NULL)
				{
					cout<<ptr->data;
					ptr=ptr->link;
				}
			}
		}
};
int main()
{
	ll q;
	int choice,v,fl=1;
	while(fl==1)
	{
		cout<<"\n1 for enqueue\n2 for dequeue\n3 for showfront\n4 for display the queue\n";
		cout<<"enter your choice : ";
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
				q.showtop();
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
