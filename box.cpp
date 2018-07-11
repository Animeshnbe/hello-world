#include<iostream>
using namespace std;
class Box{
	int l,b,h;
	public:
		Box(){
			l=10;
			b=5;
			h=8;
		}
		Box(int len=15,int wid=12,int ht=10){
			l=len;
			b=wid;
			h=ht;
		}
		void comp(void){
			cout<<"\nLength=\t"<<l<<"\nBreadth=\t"<<b<<"\nHeight=\t"<<h;
			cout<<"\nVolume=\t"<<(l*b*h);
		}
};
int main(){
	int a,b,c;
	Box o1;
	o1.comp();
	cout<<"\nEnter new dimensions:";
	cout<<"\nEnter length and breadth:";
	cin>>a>>b;
	o1.comp(a,b);
	cout<<"\nEnter height:";
	cin>>c;
	o1.comp(c);
	return 0;
}
