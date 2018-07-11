#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,i,min,k=0;temp=1,count=1;
	string rawInput;
    getline( cin, rawInput, ' ' );
    n=atoi(rawInput.c_str());
	int a[n],b[n];
	for(i=0;i<n;i++){
		getline( cin, rawInput, ' ' );
    	a[i]=atoi(rawInput.c_str());
	}
	b[0]=0;
	min=a[0];
	for(i=1;i<n;i++){
		if(min>a[i]){
			b[k]=i;
			k++;}
	}
	while ((temp<packet)&&(max>0)){
		temp=1;
		for(i=raw-2;i>=0;i--)
			temp+=a[i]/max;
		if (temp==packet)
			break;
		else{
            count++;
            max=a[raw-count];}
	}
	cout<<max;
}
		if (temp==packet)
			break;
		max--;
	}
	cout<<max;
}
