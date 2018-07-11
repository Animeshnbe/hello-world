#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<new>
using std::bad_alloc;
#include<stdexcept>

class zero{
	public:
	zero()
	: message("Attempting to divide by zero!"){}
	const char *what() const {return message;}
	private:
	const char *message;
};

class outofbounds{
	public:
	outofbounds()
	: message("Array index out of bound!"){}
	const char *that() const {return message;}
	private:
	const char *message;
};

class exception:public zero,public outofbounds{
	int m,n,i,j;
	int a[20];
	public:
	void input(){
		cout<<"\nEnter the length of the array: ";
		cin>>m;
		cout<<"\nEnter the elements one by one:\n";
		for(i=0;i<m;i++){
			cin>>a[i];
			if(cin.fail())
			 throw std::runtime_error("Input is not an integer!");
		}
	}
	void add(){
		int s=0;
		cout<<"\nEnter the number of terms to be added: ";
		cin>>n;
		if(n>m)
			throw outofbounds();
		for(i=0;i<n;i++)
			s+=a[i];
		cout<<"\nThe sum of all the elements is: "<<s;
	}
	void compute(){
		cout<<"\nEnter 2 positions: ";
		cin>>i>>j;
		if(a[j]==0)
		 throw zero();
		cout<<"\nResult: "<<(float)(a[i]/a[j]);
 	}
};

int main(){
	exception obj;
	try{
		obj.input();
	}
	catch(bad_alloc ob){
		cout<<"\nException occured "<<ob.what()<<endl;
	}
	catch(const std::runtime_error& ob){
		cout<<ob.what()<<endl;
	}
	try{
		obj.add();
		obj.compute();
	}
	catch(zero ob){
		cout<<"\nException occured "<<ob.what()<<endl;
	}
	catch(outofbounds ob){
		cout<<"\nException occured "<<ob.that()<<endl;
	}
	catch(...){
		cout<<"\nInvalid input!"<<endl;
	}
	return 0;
}
