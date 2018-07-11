#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class cur_acct{
	protected:
		float b1;
	public:
		cur_acct(){b1=0.0;}
		void get_cur(float amt){
		b1+=amt;}
		void cheque(){
			float x;
			cout<<"\nEnter the cheque withdrawal amount: ";
			cin>>x;
			if(b1<x)
			 cout<<"\nInvalid amount, try again!";
			else
			 b1-=x; 
		}
		void update(){
			if(b1<1000)
			 b1*=.95;
			cout<<"\nYour last updated balance is: "<<b1;
		}
};

class sav_acct{
	protected:
		float b2;
	public:	
	    sav_acct(){b2=0.0;}
		void get_sav(float amt){
			b2+=amt;}
		void interest(){
			float t,r,final,intt;
			cout<<"\nEnter the time(in years) and annual rate: ";
			cin>>t>>r;
			final=b2*pow((1+r/100),t);
			intt=final-b2;
			b2=final;
			cout<<"\nInterest credited is = "<<intt;
		}
		void withdraw(){
			float x;
			cout<<"\nEnter the amount to be withdrawn: ";
			cin>>x;
			if(x>b2)
			 cout<<"\nInvalid amount, try again!";
			else
			 b2-=x;
		}
		void update1(){
			cout<<"\nYour last updated balance is: "<<b2;}
};

class account:public cur_acct,public sav_acct{
	string name,ac_type;
	int ac_no;
	public:
		void details(){
		cout<<"\nEnter the name of the account holder: ";
		cin>>name;
		cout<<"\nEnter the account number: ";
		cin>>ac_no;}
		string deposit(){
		cout<<"\nEnter the type of account: ";
		cin>>ac_type;
		return ac_type;}
		void disp(){
			cout<<"\nName of customer:\t\t"<<name;
			cout<<"\nAccount No:\t\t"<<ac_no;
			cout<<"\nCurrent Account Balance:\t\t"<<b1;
			cout<<"\nSavings Account Balance:\t\t"<<b2;}
};

int main(){
	account obj;
	string type;
	float a;
	int q=0;
	obj.details();
	do{
		type=obj.deposit();
		if(type=="current"){
			char ch,re;
			do{
				cout<<"\nEnter your choice (d=deposit, c=cheque, u=update): ";
				cin>>ch;
				switch (ch){
					case 'd':
						cout<<"\nEnter the amount to be deposited: ";
						cin>>a;
						obj.get_cur(a);
						obj.update();
						break;
					case 'c':
						obj.cheque();
						obj.update();
						break;
					case 'u':
						obj.update();
						break;
					default:
						cout<<"\nInvalid choice, try again!";
						break;
				}
				cout<<"\nDo you want to continue with current? (y=yes)\n";
				cin>>re;
			}while(re=='y');
		}
		else if(type=="savings"){
			char ch,re;
			do{
				cout<<"\nEnter your choice (d=deposit, w=withdrawal, i=interest, u=update): ";
				cin>>ch;
				switch (ch){
					case 'd':
						cout<<"\nEnter the amount to be deposited: ";
						cin>>a;
						obj.get_sav(a);
						obj.update1();
						break;
					case 'w':
						obj.withdraw();
						obj.update1();
						break;
					case 'i':
						obj.interest();
						obj.update1();
						break;
					case 'u':
						obj.update1();
						break;
					default:
						cout<<"\nInvalid choice, try again!";
						break;
				}
				cout<<"\nDo you want to continue with savings? (y=yes)\n";
				cin>>re;
			}while(re=='y');
		}
		cout<<"\nPress 1 to continue, else press any no.: ";
		cin>>q;
	}while(q==1);
	obj.disp();
	cout<<"\nThank you!";
	return 0;
}
