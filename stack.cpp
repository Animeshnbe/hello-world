#include<iostream>
using namespace std;
//linked list implementation of stack
struct node{
	int data;
	struct node *link;
}*top=NULL,*temp,*trav;
class stack{
	public:
		void push(int value){
			temp=new node;
			if(temp==NULL)
			    cout<<"\nNo memory, Overflow";
			else if(top==NULL){
				trav->data=value;
				trav->link=NULL;
			}
			else{
				temp->data=value;
				top->link=temp;
				temp->link=NULL;
				top=temp;
			}
		}
		void pop(){
			if(top->link==NULL)
				cout<<"\nEmpty Stack, Underflow!";
			else{
				temp=top;
				top=top->link;
		        delete temp;
			}
		}
		void top(){
			cout<<"\nThe topmost element is:\t"<<top->data;
		}
		void display(){
			cout<<"\nThe current elements are:\n";
			struct node *ptr=*top;
			while (ptr->link!=NULL){
				cout<<ptr->data<<"\t";
				ptr=ptr->link;
			}
			cout<<ptr->data<<"\n";
		}
};
int main(){
	stack obj;
	int ch,n;
	char c;
	cout<<"1:Push\n2:Pop\n3:Top\n4:Display";
	do{
		cout<<"\nEnter choice:\t";
		cin ch;
		switch(ch){
			case 1:cout<<"\nEnter value of element:\t";
			cin>>n;
			obj.push(n);
			break;
			case 2:obj.pop();
			break;
			case 3:obj.top();
			break;
			case 4:obj.display();
			break;
			default:
				cout<<"\nInvalid choice!";
				break;
		}
		cout<<"\nDo you want to continue: (y or n)\t";
		cin>>c;
	}while(c==y);
	cout<<"\nThank you!";
	return 0;
}
