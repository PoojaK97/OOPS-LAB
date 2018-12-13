#include<iostream>
using namespace std;
class Complex {
	private:
		int re;
		int im;
	public:
		Complex(int a, int b):re(a),im(b){}
		void print();
		friend void add(Complex a, Complex b);
		friend void mult(Complex a, Complex b);
};
void Complex::print() {
	cout<<endl<<re<<" +i"<<im;
}
void add(Complex a, Complex b) {
	Complex c(0,0);
	c.re=a.re+b.re;
	c.im=a.im+b.im;
	cout<<"\n Add = : ";
	c.print();
}
void mult(Complex a, Complex b) {
	Complex c(0,0);
	c.re=(a.re*b.re)-(a.im*b.im);
	c.im=(a.re*b.im)+(b.re*a.im);
	cout<<"\n Mult = : ";
	c.print();
	cout<<endl;
}
int main() {
	int x, y;
	cout<<"\nEnter real and imaginary of first complex number : ";
	cin>>x>>y;
	Complex a(x,y);
	cout<<"\nEnter real and imaginary of second complex number : ";
	cin>>x>>y;
	Complex b(x,y);
	add(a,b);
	mult(a,b);
	return 0;
}
