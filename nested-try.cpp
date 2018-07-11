#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b;
	cout<<"\nEnter a natural number: ";
	try{
		cin>>a;
		try{
			 b=a-floor(a);
			 if(b!=0)
			 	 throw ("Not an integer!");
			 cout<<a/(a+5)<<endl;
		}
		catch (const char msg[]){
			cout<<msg<<endl;
			
		}
		if (a<=0)
			throw("Not a natural number!");
		cout<<a*a<<endl;
	}
	catch (const char msg[]){
		cout<<msg<<endl;
	}
	cout<<a/(a-5)<<endl;
	return 0;
}
