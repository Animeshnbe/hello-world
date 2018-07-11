#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
// read in lines of the form
// red 7
// blue 3
// red 4
void readitems(map<string, int>& m)
{
string word;
int val=0;
while(cin>>word>>val) m[word]+=val;
}
int main()
{
map<string, int>tbl;
readitems(tbl);
int total=0;
// We want to create an iterator p for use with this type of map.
// Since we’re not going to change the map values using it,
// we’ll make a const_iterator. We could do this using
// map<string, int>::const_iterator p
// but if we wanted to create other iterators of this type
// it would be tedious. So we use ’typedef’ to make ’CI’ a
// shorthand for the long expression.
typedef map<string, int>::const_iterator CI;
for (CI p=tbl.begin(); p!=tbl.end(); ++p) {
total+=p->second;
cout<<p->first << "\t" << p->second << "\n";
}
cout << "total\t" << total << endl;
return !cin;
}
