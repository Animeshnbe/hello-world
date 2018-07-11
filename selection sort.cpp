#include<iostream>
using namespace std;
int main(){
	int i,j,min,loc;
	int a[10];
	cout<<"Please enter 10 numbers\n";
	for (i=0;i<10;i++)
		cin>>a[i];
	//selection sort
	for(i=0;i<9;i++){
		min=a[i];
		loc=i;
		for(j=i+1;j<10;j++){
			if(min>a[j]){
				min=a[j];
				loc=j;
			}
		}
    (a[i]^=a[loc]),(a[loc]^=a[i]),(a[i]^=a[loc]);
	}
	cout<<"\nArray after sorting is\n";	
	for(i=0;i<10;i++)
	 cout<<a[i]<<", ";
	return 0;
}
