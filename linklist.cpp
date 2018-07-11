/*my first linked list program
for inserting data from the end*/
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
}*start=NULL;
int main(){
	int n,i=1;
	char ch;
	struct node *temp,*ptr,*tr;
	do{
	cout<<"\nEnter the element #"<<i<<":\t";
	cin>>n;
	temp=new node;
	if(temp==NULL){
	  cout<<"\nMemory not allocated\n";
	  return 0;}
	temp->data=n;
	temp->link=NULL;
	if (start==NULL)
    	start=temp;
    else{
    	ptr=start;
    	while(ptr->link!=NULL)
    		ptr=ptr->link;
     	ptr->link=temp;}
	cout<<"\nWant to re-enter?(y=yes):\t";
	cin>>ch;
	i++;}
	while(ch=='y');
	cout<<"\n\tPrinting now!\n";
	tr=start;
	do{
		cout<<tr->data<<"\t";
		tr=tr->link;
	}while(tr!=NULL);
	return 0;
}
