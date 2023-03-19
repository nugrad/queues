#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>q)
{
	int n=q.size();
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<q.front();
		q.pop();
	}
}
main()
{
	queue<int>q;
	cout<<"queue after enqueing : ";
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(10);
	q.push(15);
	display(q);
	cout<<"\n";
	cout<<"element at front : "<<q.front()<<endl;
	cout<<"element at rear  : "<<q.back()<<endl;
	cout<<"queue after dequeing 2 elements : ";
	q.pop();
	q.pop();
	display(q);
	cout<<"\n";
	cout<<"check for empty(0 or 1) : "<<q.empty()<<endl;
	cout<<"size of queue : "<<q.size()<<endl;
	
	
	queue<char> q2, q3;
    int v = 96;
    for (int i = 0; i < 5; i++) {
      q2.push(v + 1);
      v++; //a b c d e 
    }
    cout<<"element at front for queue 2 : "<<q2.front()<<endl;
	cout<<"element at rear  : "<<q2.back()<<endl;
	cout<<"queue after dequeing 2 elements : ";
	q2.pop();
	q2.pop();
	//cout << "queue2 :  ";
    while (!q2.empty()) {
      cout << q2.front() << " ";
      q2.pop(); //f g h i
   }
	cout<<"\n";
	cout<<"check for empty(0 or 1) : "<<q2.empty()<<endl;
	cout<<"size of queue : "<<q2.size()<<endl;
  
   for (int i = 0; i < 4; i++) {
      q3.push(v + 1);
      v++; //f g h i
    }
        
    
//    cout<<queue1.swap(queue2);
  
    
    
  
    
    cout << endl << "queue3 :  ";
    while (!q3.empty()) {
      cout << q3.front() << " ";
      q3.pop(); //a b c d e
   }
}
