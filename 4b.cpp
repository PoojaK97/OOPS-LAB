#include<iostream>
#include<string>
using namespace std;
class str{
	private:
		string a;
	public:
		str(){a="";}
		str(string s):a(s){}
		str(const str& l){
			a=l.a;
		}
		void cat(str m) {
			a=a+m.a;
		}
		void print(){cout<<a<<endl;}
};
int main() {
	str a;
	cout<<"\nObject 'a' created with uninitialized string";
	string s1;
	cout<<"\nEnter a string : ";
	getline(cin,s1);
	str b(s1);
	cout<<"\nObject 'b' initialized with string constant at time of creation";
	str c=b;
	cout<<"\nObject 'c' created created and initialized to 'b'";
	cout<<"\nA = ";
	a.print();
	cout<<"\nB = ";
	b.print();
	cout<<"\nC = ";
	c.print();
	c.cat(b);
	cout<<"\nObject 'c' concatenated with 'b' ";
	cout<<"\n C is now = ";
	c.print();
	return 0;
}
