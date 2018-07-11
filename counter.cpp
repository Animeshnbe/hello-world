#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int count (const string& s, char c)
{
string::const_iterator i=find(s.begin(), s.end(),c);
int n=0;
while(i!=s.end()){
++n;
i=find(i+1, s.end(),c);
}
return n;
}
int main(){
	string str;
	char c;
	cout<<"Enter a text: ";
	getline(cin,str);
	cout<<"Enter a letter: ";
	cin>>c;
	cout<<"\nNo of times= "<<count(str,c);
	return 0;
}

