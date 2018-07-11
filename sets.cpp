#include <iostream>
#include <cstring>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std; // needed for ostream_iterator
int main()
{
//Initialize some sets
int a1[10] = {1,2,3,4,5,6,7,8,9,10};
int a2[6] = {2,4,6,8,10,12};
set<int> s1(a1, a1+10), s2(a2, a2+6), answer ;
cout << "s1=";
copy(s1.begin(), s1.end(),
ostream_iterator<int>(cout," "));
cout << "\ns2=";
copy(s2.begin(), s2.end(),
ostream_iterator<int>(cout," "));
//Demonstrate set_difference
set_difference(s1.begin(), s1.end(),
s2.begin(), s2.end(), inserter(answer,answer.begin()));
cout << "\nThe set-difference of s1 and s2 =";
copy(answer.begin(), answer.end(),
ostream_iterator<int>(cout," "));
cout << endl;
return 0;
}
