#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
char v[]="abcd";
cout << v << "\t";
while (next_permutation(v, v+4))
cout << v << "\t";
return 0;
}

