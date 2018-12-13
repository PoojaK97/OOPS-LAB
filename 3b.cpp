#include<iostream>
using namespace std;
class Complex {
        private:
                int re;
                int im;
        public:
                Complex(int a, int b):re(a),im(b){}
		void print();
		void operator++(int);
		void operator++();
};
void Complex::print() { 
	cout<<re<<"+ i"<<im<<endl;
}
void Complex::operator++(int) {
       	cout<<"Post Increment : "<<re++<<"+ i"<<im++<<endl;
}
void Complex::operator++() { 
	cout<<"Pre Increment : "<<++re<<" +i"<<++im<<endl;
}
int main() {
	int x, y;
	cout<<"\nEnter real and imaginary values for object : ";
	cin>>x>>y;
	Complex a(x,y);
	a++;
	++a;
	return 0;
}
