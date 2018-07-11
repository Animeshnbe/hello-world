/*PROGRAM TO MAINTAIN BANK ACCOUNT DETAILS*/
#include<iostream>
using namespace std;
class acc_holder
{
	private:
		char name;
		int account_no;
		float balance;
	public:
		void get()
		{
			cout<<"enter the name of holder\n";
			cin>>name;
			cout<<"enter the account no\n";
			cin>>account_no;
			cout<<"enter the current balance\n";
			cin>>balance;
		}
		void dis()
		{
			cout<<name<<endl;
			cout<<account_no<<endl;
			cout<<balance<<endl;
		}
};
int main()
{
	acc_holder a1;
	a1.get();
	a1.dis();
	return 0;
}
