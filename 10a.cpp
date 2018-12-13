#include<iostream>
using namespace std;
class box {
	private:
		int l;
		int b;
		int h;
	public:
		static int x;
		static int y;
		static void getcount() {
			cout<<"\nNumber of objects : "<<x<<endl;
		}
		box(){x++;}
		void get(){
			cout<<"\nEnter dimensions : ";
			cin>>l>>b>>h;
		}
		void display() {
			y++;
			int volume=l*b*h;
			cout<<"\nVolume of box "<<y<<" = "<<volume<<endl;
		}
};
int box::y=0;
int box::x=0;
int main() {
	int n;
	cout<<"\nEnter number of boxes : ";
	cin>>n;
	box b[n];
	cout<<"\nEnter box details : ";
	for(int i=0;i<n;i++) 
		b[i].get();
	for(int i=0;i<n;i++)
		b[i].display();
	box::getcount();
	return 0;
}
