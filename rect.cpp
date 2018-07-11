#include<iostream>
using namespace std;
class Rectangle
{
	int l,w;
	//int *p,*q;
	public:
		Rectangle(){
			l=6;
			w=8;}
		Rectangle(int len,int wid){
			l=len;
			w=wid;}
		Rectangle(Rectangle &p){
			l=p.l;
			w=p.w;
		}
		void print(void)
		{
			cout<<l<<w;
			cout<<"\nThe perimeter is=\t"<<(2*(l+w));
			cout<<"\nThe area is=\t"<<(l*w);
		}

};
int main()
{
	int a,b;
	Rectangle o1;
	o1.print();
	cout<<"\nEnter 2 numbers: ";
	cin>>a>>b;
	Rectangle o2(a,b);
	Rectangle o3(o2);
	o3.print();
	return 0;
}
