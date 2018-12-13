#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main() {
	fstream file("2a.cpp",ios::in|ios::binary);
	if(!file.is_open())
		return -1;
	file.seekg(0,ios::end);
	int fs = file.tellg();
	file.close();
	cout<<"\nThe file size is : "<<fs<<endl;
	return 0;
}
