#include<iostream>
using namespace std;
class strop{
	public:
	string s1,s2;
	static string s3;
	public:
	void input(){
		cout<<"\nEnter two strings: ";
		cin>>s1>>s2;
	}
    void operator*(strop);
    void disp(){
		cout<<"\nProduct:\t"<<s3<<endl;}
    void operator==(strop obj){
    	int j,m,n;
    	m=sizeof(obj.s1);
    	n=sizeof(obj.s2);
    	if((m==n))&&(obj.s1[0]==obj.s2[0])&&(obj.s1[m]==obj.s2[n]))
    		cout<<"\nThe two strings are isomorphic";
		else
			cout<<"\nThe two strings are not isomorphic";
    }
};

string strop::s3="";
void strop::operator*(strop obj){
		int i;
		for(i=0;i<obj.s1[i]!='\0';i++){
			obj.s3+=obj.s1[i];
			obj.s3+=obj.s2;
		}
	}

int main(){
	strop o;
	string s;
	o.input();
	o.operator*(o);
	o.disp();
	return 0;
}
