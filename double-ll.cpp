#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *prev;
	struct node *next;
}*start=NULL,*trav,*temp,*ptr;
class dual{
	public:
	void insert(int value){
		temp=new node;
		temp->data=value;
		temp->next=NULL;
		if (start==NULL){
			start=temp;
			start->prev=NULL;}
		else if(start->next==NULL){
			start->next=temp;
			temp->prev=start;
			trav=new node;
			trav=temp;
		}
		else{
			trav->next=temp;
			temp->prev=trav;
			trav=temp;
		}
	}
	void insertpos(int value,int pos){
		int i=1;
		ptr=start;
		temp=new node;
		temp->data=value;
		while(((i+1)!=pos)&&((ptr->next)->next!=NULL)){
			ptr=ptr->next;
			i++;
		}
		temp->next=ptr->next;
		ptr->next=temp;
		temp->prev=ptr;
	}
	void search(int value){
		ptr=trav;
		bool b=false;
		while(ptr!=start){
			if(ptr->data==value){
				b=true;
				break;}
			ptr=ptr->prev;
		}
		if(b==true)
		cout<<"\nThe given value is present!\n";
		else
		cout<<"\nThe given value is not present!\n";
	}
};

int main()
{ 
dual obj;
char ch,cont;
do{
cout<<"Enter a choice: \n(i=insert,s=search,p=location based insert)\n";
cin>>ch;
switch(ch){
	case 'i':
		cout<<"\nEnter the value to be inserted:\t";
		int x;
		cin>>x;
		obj.insert(x);
		break;
	case 's':
		cout<<"\nEnter the value to be searched:\t";
		int y;
		cin>>y;
		obj.search(y);
		break;
	case 'p':
		cout<<"\nEnter the value to be inserted and its position:\t";
		int w,z;
		cin>>w>>z;
		obj.insertpos(w,z);
		break;
	default:
		cout<<"\nInvalid Choice!";
		break;
}
cout<<"\nDo you want to continue (y=yes):\t";
cin>>cont;}
while(cont=='y');
return 0;
}
