#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int raw,packet,i,max,temp=1,count=1;
	string rawInput;
    getline( cin, rawInput, ' ' );
    raw=atoi(rawInput.c_str());
    getline( cin, rawInput, ' ' );
    packet=atoi(rawInput.c_str());	
	int a[raw];
	for(i=0;i<raw;i++){
		getline( cin, rawInput, ' ' );
    	a[i]=atoi(rawInput.c_str());
	}
	int l = sizeof(a)/sizeof(a[0]);
    sort(a, a+l);
	max=a[raw-count];
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
