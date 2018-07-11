/*BANKING DETAILS MANAGEMENT PROJECT*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class holder
{
	public:
		long int acc;
		char name[20];
		float balance;
		void dis()
		{
			cout<<"enter the account number\n";
			cin>>acc;
			cout<<"enter the name\n";
			cin>>name;
			cout<<"enter the current balance\n";
			cin>>balance;
			}
		void print()
		{
		
				cout<<acc<<"     "<<name<<"    "<<balance<<endl;
		}
};
int main()
{
	int n,k=0;
	cout<<"enter the value of n\n";
	cin>>n;
	holder a[n];
	for(int i=0;i<n;i++)
	{
		a[i].dis();
	}
	for(int i=0;i<n;i++)
	{
		a[i].print();
	}
	long int p;
	cout<<"enter the account number\n";
	cin>>p;
	for(int i=0;i<n;i++)
	{
		if(p==a[i].acc)
		{
			cout<<"welcome~~~~~"<<a[i].name<<endl;
			k=0;	
		}
	}
			else if(p!=a[i].acc)
			{
				k++;
			}
		if(k!=0)
		{
			cout<<"INVALID PIN"<<endl;
			cout<<"\t BETTER LUCK NEXT TIME"<<endl;
			cout<<"\t\t\t For more details log in to our website\n";
		}
	return 0;
}

