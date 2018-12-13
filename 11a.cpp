#include<iostream>
using namespace std;
class A{
	public:
		A(){cout<<"\nA constructor called";}
		~A(){cout<<"\nA destructor called";}
};
class B:public A{
        public:
                B(){cout<<"\nB constructor called";}
                ~B(){cout<<"\nB destructor called";}
};     
class C{
        public:
                C(){cout<<"\nC constructor called";}
                ~C(){cout<<"\nC destructor called";}
};     
class D:public B, public C{
        public:
                D(){cout<<"\nD constructor called";}
                ~D(){cout<<"\nD destructor called";}
};      
int main() {
	cout<<"\n\t\tClass A, B, D are in MULTILEVEL inheritance : A-->B-->D \n";
	cout<<"\n\t\tClass B,C,D are in MULTPLE inheritance B-->D<--C \n";
	cout<<"\nC-D call for A : ";
	{ A a; }
	cout<<"\nC-D call for B : ";
	{ B b; }
	cout<<"\nC-D call for C : ";
	{ C c; }
	cout<<"\nC-D call for D : ";
        { D d; }
	return 0;
}
