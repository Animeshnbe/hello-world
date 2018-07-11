#include<iostream>
using namespace std;
class length{
	int kilo,mts;
	public:
		length(){
			kilo=0;
			mts=0;
		}
		length(int a,int b){
			kilo=a;
			mts=b;
		}
		void get_length(void){
			int x,y;
			cout<<"Enter the distance in kilometres and metres:";
			cin>>x>>y;
			kilo=x;
			mts=y;
		}
		void put_length(){
			cout<<"\nThe current distance is "<<kilo<<"kilometres and "<<mts<<"metres\n";
	    }
	    length operator+(const length& o){
	    	length o1;
	    	o1.kilo=this->kilo+o.kilo;
	    	o1.mts=this->mts+o.mts;
	    	return o1;
	    }
};
int main(){
	length t1,t2(11,600);
	t1.put_length();
	cout<<"Enter properties of distance 1:\n";
	t1.get_length();
	t1.put_length();
	cout<<"\nFor the distance 2:\n";
	t2.put_length();
	length t3=t1+t2;
	cout<<"\nFor the distance 3:\n";
	t3.put_length();
	return 0;
}
