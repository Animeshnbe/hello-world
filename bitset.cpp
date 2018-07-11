#include <iostream>
#include <bitset>
using namespace std;

int main()
{
const unsigned int width = 32;
bitset<width> b1("10111");
bitset<width> b2 = 1023;
bitset<width> b3;
cout << "Type in a binary number (type a non-binary digit to end) ";
cin >> b3;
cout << "You typed " << b3 << endl;
cout << "b2 flipped=" << b2.flip() << endl;
cout << "b1=" << b1 << endl;
return 0;
}
