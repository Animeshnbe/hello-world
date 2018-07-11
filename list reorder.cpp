#include<iostream>
using namespace std;
struct node{
	int value;
	struct node* link;
}*start=NULL,*trav,*temp,*ptr,*start2,*trav2=NULL;

int main(){
	int i,j,n,m;
	cout<<"Enter the size of the list: ";
	cin>>n;
	cout<<"\nEnter the elements:\n";
	cin>>start->value;
	trav=new node;
	start->link=trav;
	for(i=1;i<n;i++){
		temp=new node;
		cin>>temp->value;
		temp->link=NULL;
		trav->link=temp;
		trav=temp;
	}
	cout<<"\nEnter the position from which deletion starts:  ";
	cin>>m;
	for(i=m;i>1;i--){
		ptr=start;
		for(j=1;j<i;j++){
			ptr=ptr->link;
		}
		temp=ptr->link;
		ptr=temp->link;
		temp->link=NULL;
		if(trav2==NULL){
			start2->link=temp;
			trav2=temp;
		}
		else{
			trav2->link=temp;
			trav2=temp;
		}
	}
	trav2->link=start;
	temp=start2;
	while(temp->link!=NULL)
	 cout<<temp->value<<", ";
	return 0;
}
