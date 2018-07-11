#include<iostream>
using namespace std;
int main(){
	int i,j;
	int a[10];
	cout<<"Please enter 10 numbers\n";
	for (i=0;i<10;i++)
		cin>>a[i];
	//bubble sort
	for(i=1;i<10;i++){
		for(j=0;j<10-i;j++){
			if(a[j+1]>a[j])
			(a[j+1]^=a[j]),(a[j]^=a[j+1]),(a[j+1]^=a[j]);
		}
    }
	cout<<"\nArray after sorting is\n";	
	for(i=0;i<10;i++)
	 cout<<a[i]<<", ";
return 0;
}
