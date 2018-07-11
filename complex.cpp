#include<iostream>
using namespace std;
class complex
{private:
	int a,b;
	public:
		void set_data()
		{int x,y;
		cin>>x>>y;
		}
		void display_data()
		{
			int x,y;
			cout<< x << "i"<< y<<"\n";
		}
		void add()
		{int a,b;
			complex c1,c2,c3;
			c3.a = c1.a +c2.a;
			c3.b = c1.b + c2.b;
			cout<<c3.a <<"i" <<c3.b; 
		}
};
int main()
{
	complex c1,c2,c3; 
	cout<<"enter the complex number\n";
	c1.set_data();
	c1.display_data();
	c2.set_data();
	c2.display_data();
	c3=c1.add(c2);
	return 0;
}
