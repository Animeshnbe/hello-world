#include<iiostream>
using namespace std;
class complex
{
float a,b;
public:
	complex(){
	}
	complex(float x,float y)
	{
		a=x;
		b=y;
	}	
	~complex()
	{
		cout<<"THE COMPLEX TYPE OBJECT IS DESTROYED\n";
	}
	void dis()
	{
		cout<<"THE VALUE OF COMPLEX NUMBER IS"<<"______"<<a<<"+j"<<b<<endl;
	}
	complex operator +(complex);
	complex operator *(complex);
};
complex complex::operator +(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return(temp);
}
complex complex::operator *(complex c)
{
	complex temp;
	temp.a=(a*c.a)-(b*c.b);
	temp.b=(a*c.b)+(b*c.a);
	return (temp);
}
int main()
{ complex c1,c2,c3,c4;
c1=complex(4.5,-8.9);
c1.dis();
c2=complex(-2.0,-7.9);
c2.dis();
c3=c1.operator+(c2);
 c3.dis();
 c4=c1*c2;
 c4.dis();
 return 0;
}
