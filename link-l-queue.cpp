#include<iostream>
using namespace std;
//queue using linked list
struct node{
	int data;
	//struct node *prev;
	struct node *next;
}*front=NULL,*temp,*rear=NULL;
class queue{
	public:
	void enqueue(int value)
	{
		temp=new node;
		if(temp==NULL)
		cout<<"\nOverflow!";
		else if (front==NULL){
			temp->data=value;
			temp->next=NULL;
			front=temp;
			rear=temp;
		}
		else{
			temp->data=value;
			temp->next=NULL;
			rear->next=temp;
			rear=temp;
		}
	}
	void dequeue(){
		if(front==NULL)
		cout<<"\nUnderflow!";
		else if (front==rear){
			front->next=NULL;
			rear->next=NULL;
			//free(front);
		}
		else{
			front=front->next;
			//free(front);
		}
	}
	void print(){
	 cout<<"\nThe current elements in the linked list are:\n";
	 temp=front;
   	 while(temp->next!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;}
	}
	//void first();
};
int main()
{
	int n,l;
	char c;
	queue obj;
	do{
	cout<<"Enter a choice:\t";
	cin>>c;
	 switch(c){
		case 'e':cout<<"\nEnter the element:\n";
		cin>>n;
		obj.enqueue(n);
		break;
		case 'd':
			obj.dequeue();
			break;
		case 'p':
			obj.print();
			break;
		default:
			cout<<"\nInvalid Choice:";
			break;
		}
	cout<<"Want to continue?\n1:yes\t0:no\t";
	cin>>l;
	}while(l==1);
	cout<<"\nThank You!";
	return 0;
}
