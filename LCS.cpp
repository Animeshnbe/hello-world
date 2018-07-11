#include <iostream>
#include <string.h>
#include <math.h>
#include<fstream>
using namespace std;

int find(string A, string B, string *m0){
	int m,n;
	m=A.length();
	n=B.length();
	int lcs[m+1][n+1];
	string sol[m+1][n+1]; 
	for (int i=0; i<=m; i++)
   	{
    	for (int j=0; j<=n; j++)
     	{
       		if (i == 0 || j == 0){
        		lcs[i][j] = 0;
        		sol[i][j]="0";}
  
       		else if (A[i-1] == B[j-1]){
         		lcs[i][j] = lcs[i-1][j-1] + 1;
         		sol[i][j]="diagonal"; }
  
       		else { 
 				lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]); 
 				if (lcs[i][j] == lcs[i-1][j]) 
 					sol[i][j]="top"; 
 				else  
					sol[i][j]="left"; 
 			}
     	}
   	}

	//getting the subsequence for the pair 
 	string x = sol[m][n]; 
 	string answer = ""; 
 	while ((x!="0")&&(m>=0)&&(n>=0)) { 
 		if (sol[m][n]=="diagonal") { 
 			answer = A[m-1]+answer; 
 			m--; 
 			n--; 
 		} 
		else if (sol[m][n]=="left") { 
 			n--; 
 		} 
		else if (sol[m][n]=="top") { 
 			m--; 
 		} 
 		x = sol[m][n]; 
 	}
 	*m0 =  answer; 
 	return lcs[A.length()][B.length()];
}

int main(){
	int k,max=0,m2,i,j;
	cout<<"\nEnter the no of strings:\t";
	cin>>k;
	string A[k+2];
	string m1="",str;
	ifstream file("file1.txt");
	if (file.is_open()){
		for(i=0;i<k;i++)
			file>>A[i];
	}
	cout<<"\nThe input strings are:"<<endl;
	for(i=0;i<k;i++)
		cout<<A[i]<<endl;
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
				//if(A[i].length()>A[j].length())
			m2=find(A[i],A[j],&m1);
				//else
				//m2=find(A[j],A[i],&m1);			
			if (max<m2){
				max=m2;
				str=m1;	
				A[k]=A[i];
				A[k+1]=A[j];
			}
		}
	}
	cout<<"\nLCS:\t"<<str;
	cout<<"\nLCS length:\t"<<max;
	cout<<"\n\nThe most similar sequences are:\n";
	cout<<A[k]<<" and\n"<<A[k+1];
}
