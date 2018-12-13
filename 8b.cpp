#include<iostream>
#include<string>
using namespace std;
class person {
	protected:
		string name;
		int age;
	public:
		void get(){
			cout<<"\nEnter name and age : ";
			cin>>name>>age;
		}
		void disp() {
			cout<<"\nName and age = : ";
			cout<<name<<age<<endl;
		}
};
class teacher : public person {
	private:
		int p;
	public:
		void getp(){
			cout<<"\nEnter number of publications : ";
			cin>>p;
		}
		void putp() {
			cout<<p<<endl;
		}
};
class student : public person { 
	protected:
		int m[3];
	public:
		void getm() {
			cout<<"\nEnter 3 test marks :(out of 30) ";
			cin>>m[0]>>m[1]>>m[2];
		}
		void putm() {
			cout<<"\n3 test marks : "<<m[0]<<m[1]<<m[2];
			cout<<endl;
		}
};
class marks : public student {
	private:
		int perc;
	public:
		void putp() {
			cout<<"\nPercentage in 3 subjects - ";
			cout<<m[0]*100/30<<" "<<m[1]*100/30<<" "<<m[2]*100/30<<endl;
		}
};
int main() {
	int a, b;
	cout<<"\nEnter number of students and teachers : ";
	cin>>a>>b;
	teacher t[b];
	for(int i=0;i<b;i++)  {
		cout<<"\nEnter teacher details : ";
		t[i].get();
		t[i].getp();
	}
	for(int i=0;i<b;i++) {
		cout<<"Teacher "<<i+1<<" details : ";
		t[i].disp();
		cout<<"\nNumber of publications of teacher "<<i+1<<" is ";
		t[i].putp();
	}
	marks s[a];
	for(int i=0;i<a;i++) {
		cout<<"\nEnter student details : ";
		s[i].get();
		s[i].getm();
	}
	for(int i=0;i<a;i++) {
		cout<<"\nStudent "<<i+1<<" details : ";
		s[i].disp();
		s[i].putm();
		s[i].putp();
	}
	return 0;
}
