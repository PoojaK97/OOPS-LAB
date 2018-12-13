#include<iostream>
#include<string>
using namespace std;
class student {
	public:
		virtual void read()=0;
		virtual void print()=0;
};
class Engineering : public student {
	private:
		string name;
		string rollno;
	public:
		void read() {
			cout<<"\nEnter name : ";
			getline(cin,name);
			cout<<"\nEnter roll no : ";
			getline(cin,rollno);
		}
		void print() {
			cout<<"\nENGINEERING : ";
			cout<<"\nName - "<<name<<"\nRoll no - "<<rollno<<endl;
		}
};
class Science : public student {
        private:
                string name;
                string rollno;
        public: 
                void read() {
                        cout<<"\nEnter name : ";
                        getline(cin,name);
                        cout<<"\nEnter roll no : ";
                        getline(cin,rollno);
                }       
                void print() {
                        cout<<"\nSCIENCE : ";
                        cout<<"\nName - "<<name<<"\nRoll no - "<<rollno<<endl;
                }       
}; 
class Medical : public student {
        private:
                string name;
                string rollno;
        public: 
                void read() {
                        cout<<"\nEnter name : ";
                        getline(cin,name);
                        cout<<"\nEnter roll no : ";
                        getline(cin,rollno);
                }       
                void print() {
                        cout<<"\nMEDICAL : ";
                        cout<<"\nName - "<<name<<"\nRoll no - "<<rollno<<endl;
                }       
}; 
int main() {
	student *p;
	Engineering a;
	Science b;
	Medical c;
	p=&a;
	cout<<"\nEnter engineering student details : ";
	p->read();
	p=&b;
	cout<<"\nEnter science student details : ";
	p->read();
	p=&c;
	cout<<"\nEnter medical student details : ";
	p->read();
	p->print();
	p=&b;
	p->print();
	p=&a;
	p->print();
	return 0;
}
