#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,i=0,s=0;
	string rawInput;
	cin>>n;
	int a[n];
	while( i<n )
    {
    	getline( cin, rawInput, ' ' );
    	a[i]=atoi(rawInput.c_str());
    	i++;
    }
	int l = sizeof(a)/sizeof(a[0]);
    sort(a, a+l);
	for (i=1;i<n;i++){
		s+=a[i]-a[i-1];
	}
	cout<<s;
}
