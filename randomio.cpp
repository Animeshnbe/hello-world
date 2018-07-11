#include <iostream>
#include <cstring>
#include <stdlib.h> // to use rand
#include <fstream>
using namespace std;

int main() {
	ofstream outfile("myresults",ios::out|ios::binary);
	if (outfile.good() == false) {
		cerr << "Cannot write to ’myresults’" << endl;
		exit(1);
	}
	int num;
	for (int i=0; i<100; i++){
		num=rand();
		outfile.write(reinterpret_cast<const char*>(&num), sizeof(num));
	}
	outfile.close();
	ifstream infile("myresults");
	if (infile.good() == false) {
		cerr << "Cannot open ’myresults’" << endl;
		exit(1);
	}
	int count=0;
	while(infile.read(reinterpret_cast<char*>(&num), sizeof(num))) {
		cout << num << endl;
		count++;
	}
	cout << count << " numbers read" << endl;
	infile.close();
	return 0;
}
