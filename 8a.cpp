#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream x;
	x.open("8a.cpp",ios::binary|ios::in);
	int line=0;
	string st;
	while(getline(x,st))
		line++;
	cout<<"Number of lines = "<<line<<endl;
	x.close();
	return 0;
}
