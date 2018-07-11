#include<iostream>
using namespace std;
//priority queue
struct node{
	int data,prn;
	struct node* link;
}*start=NULL,*temp,*trav,*t0,*t1;
void main(){
	int ch,i;
	do{
		temp=new node;
		cout<<"\Enter the element and its priority number:";
		cin>>temp->data>>temp->prn;
		temp->link=NULL;
		cout<<"\Press 1 to continue, else exit:\t";
		cin>>ch;
		if(start==NULL){
			start=temp;
			trav=start;}
		else{
			trav->link=temp;
			trav=temp;
		}
	}while(ch==1);
	temp=new node;
	t0=new node;
	t0=start;
	t1=new node;
	while(t0->link!=NULL){
		t1=t0->link;
		while(t1!=NULL){
			if((t0->prn)>=(t1->prn)){
				temp=t0;
				t0=t1;
				t1=temp;
			}
			t1=t1->link;}
		t0=t0->link;
	}
	
	
	
}
