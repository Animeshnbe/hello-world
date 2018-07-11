#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
char v[]="abcd";
cout << v << "\t";
for (int i=5;i;i--) {
	random_shuffle(v, v+4);
	cout << v << "\t";}
return 0;
}

