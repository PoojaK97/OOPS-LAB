#include<iostream>
#include<iomanip>
using namespace std;
class Time {
	private:
		int h;
		int m;
		int s;
	public: 
		Time(){
			h=0,m=0,s=0;
		}
		Time(int x, int y, int z):h(x),m(y),s(z){}
		Time add(Time b) {
			Time x;
			x.s=s+b.s;
			x.m=m+b.m+(x.s/60);
			x.h=h+b.h+(x.m/60);
			x.m%=60;
			x.s%=60;
			x.h%=24;
			return x;
		}
		void print() {
			cout<<endl<<"Time is : "<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
		}
};
int main() {
	int h,m,s;
	cout<<"\nEnter the first time(H,M,S) : ";
	cin>>h>>m>>s;
	Time a(h,m,s);
	cout<<"\nEnter the second time(H,M,S) : ";
	cin>>h>>m>>s;
	Time b(h,m,s);
	cout<<"\nFirst time is : ";
	a.print();
	cout<<"\nSecond time is : ";
	b.print();
	Time c;
	c=a.add(b);
	cout<<"\nAdded time is : ";
	c.print();
	return 0;
}
