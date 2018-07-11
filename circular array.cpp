#include<iostream>
using namespace std;
//to implement queue with circular array
int main(){
	int front=-1, rear=-1, ch,n,val,i;
	cout<<"Enter the size of queue: ";
	cin>>n;
	int ar[n];
	cout<<"\n\t\t~~~~~~~MENU~~~~~~~\n";
	cout<<"\n1:enqueue\t2:dequeue\t3:isEmpty\t4:isFull\t5:Free\t6:display";
	do{
		cout<<"\nEnter your choice:";
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"\nEnter the value: ";
				cin>>val;
				if ((rear+1)%n==front){
					cout<<"\nOverflow! Try again\n";
					break;}
				else if(rear==-1){
					front=0; rear=0;
					ar[rear]=val;}
				else{
					rear=(rear+1)%n;
					ar[rear]=val;}
				break;
			case 2:
				if(front==-1){
					cout<<"\nUnderflow! Try again\n";
					break;}
				else
					front=(front+1)%n;
				break;
			case 3:
				if(front==-1)
					cout<<"\nThe queue is empty!";
				else
					cout<<"\nNot Empty";
				break;
			case 4:
				if((rear+1)%n==front)
					cout<<"\nThe queue is full!";
				else
					cout<<"\nQueue is still not full";
				break;
			case 5:
				for(i=0;i<n;i++)
					ar[i]=0;
				break;
			case 6:
				for(i=0;i<n-1;i++)
					cout<<ar[i]<<",\t";
				cout<<ar[n-1];
				break;
		}
		val=0;
		cout<<"\nDo you wish to continue? (1=yes)\n";
		cin>>val;
	}while(val==1);
	cout<<"\nThank You!";
	return 0;
}
