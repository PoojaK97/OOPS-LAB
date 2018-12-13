#include<iostream>
#include<string>
using namespace std;
class media {
	protected:
		string title;
		int price;
	public:
		media(string a, int b):title(a),price(b){}
		virtual void display()=0;
};
class book : public media {
	private:
		int pg;
	public:
		book(string m, int n, int o):media(m,n),pg(o){}
		void display(){
			cout<<"\nBOOK : "<<"\nTITLE : "<<title<<"\nPRICE : "<<price<<"\nPAGES : "<<pg<<endl;
		}
};
class vtape : public media {
	private:
		int len;
	public:
		vtape(string m, int n, int o):media(m,n),len(o){}
		void display() {
			cout<<"\nVIDEO TAPE : "<<"\nTITLE : "<<title<<"\nPRICE : "<<price<<"\nLENGTH : "<<len<<endl;
		}
};
int main() {
	media *p;
	string a1;
	int m, n;
	cout<<"\nEnter the book details : (name, price, pages) - : ";
	getline(cin,a1);
	cin>>m>>n;
	book a(a1,m,n);
	cout<<"\nEnter the video tape details : (name, price, length) - : ";
	cin.ignore();
	getline(cin,a1);
	cin>>m>>n;
	vtape b(a1,m,n);
	p=&a;
	p->display();
	p=&b;
	p->display();
	return 0;
}
