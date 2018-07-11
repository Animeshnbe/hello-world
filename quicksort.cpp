#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
srand(time(NULL));
using namespace std;
int part(int a[],int l,int r){
	int i,j,pivot;
	i=l;
	j=r;
	pivot=(i+j)/2;
}
int rec(int i,int j, int pivot){
	if(i==j)
		//return the same array
	else if()
	
	else{
		while(i<j){
			pivot=a[k];
			while(a[i]<pivot && i)
				i++;
			a[k]=a[i];
			a[i]=a[j];
			a[j]=pivot;
			j--;
		}
		
	}
}
int main(){
	int n,temp,i=0,j=n-2,k=n-1,pivot;
	cout<<"Enter the number of elements:\t";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		a[i]=(rand()%100)+1;
	}
	
	cout<<"\nThe sorted elements are:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"  ";
	return 0;
}
