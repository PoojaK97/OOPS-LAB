#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student {
	private:
		string name;
		string rollno;
		int marks[3];
	public:
		void getdata();
		void computeg();
};
void student::getdata() {
	cout<<"\nEnter NAME, ROLLNO, and MARKS OF 3 SUBJECTS : ";
	cin>>name>>rollno>>marks[0]>>marks[1]>>marks[2];
	fstream b;
	b.open("StudentRecord.txt",ios::binary|ios::out|ios::app);
	b<<"Name - "<<name<<"\n";
	b<<"Rollno - "<<rollno<<"\n";
	b<<"Marks - "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<"\n";
	b.close();
	void computeg();
}
void student::computeg() {
	int avg;
	char g;
	avg=(marks[0]+marks[1]+marks[2])/3;
	if(avg>90) 
		g='A';
	else if(avg>80)
		g='B';
	else if(avg>70) 
		g='C';
	else
		g='D';
	fstream m;
	m.open("StudentRecord.txt",ios::binary|ios::out|ios::app);
	m<<"Grade - "<<g<<"\n";
}
int main() {
	student s[20];
	int a;
	cout<<"\nEnter the number of students : ";
	cin>>a;
	cout<<"\nEnter the student details : ";
	for(int i=0;i<a;i++) {
		cout<<"\nEnter student "<<i+1<<" details : ";
		s[i].getdata();
		s[i].computeg();
	}
	cout<<"\n\t\t STUDENT DETAILS : \n";
	fstream x;
	x.open("StudentRecord.txt",ios::binary|ios::in);
	string st;
	while(!x.eof()) {
		getline(x,st);
		cout<<st<<endl;
	}
	x.close();
	return 0;
}
