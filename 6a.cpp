#include<iostream>
#include<string>
using namespace std;
class student {
	protected:
		int age;
		string usn;
		string name; 
	public:
		student() {
			usn="";
			name="";
			age=0;
		}
		int ga() { return age; }
};
class ugstudent:public student {
	private:
	        int sem;	
		int fees;
		int stipend;
	public:
		ugstudent(){
			sem=0,fees=0,stipend=0;
		}
		void getdata() {
			cout<<"\nEnter details (name, usn, age, sem, fees, stipend) : ";
			cin>>name>>usn>>age>>sem>>fees>>stipend;
		}
		void print() {
			cout<<"\nThe details are (name, usn, age, sem, fees, stipend) : ";
			cout<<name<<", "<<usn<<", "<<age<<", "<<sem<<", "<<fees<<", "<<stipend<<endl;
		}
		int gs() {return sem; }
};
class pgstudent:public student {
	private:
		int sem;
		int fees;
		int stipend;
	public:
		pgstudent() {
			sem=0,fees=0,stipend=0;
		}
		void getdata() {
			cout<<"\nEnter details (name, usn, age, sem, fees, stipend) : ";
                        cin>>name>>usn>>age>>sem>>fees>>stipend;
                }
                void print() {
                        cout<<"\nThe details are (name, usn, age, sem, fees, stipend) : ";
                        cout<<name<<", "<<usn<<", "<<age<<", "<<sem<<", "<<fees<<", "<<stipend<<endl;
                }
		int gs() {return sem; }
};   
int main() {
	pgstudent p[10];
	ugstudent u[10];
	int x, y, uage, page, uc, pc;
	cout<<"\nEnter number of UG students and PG students : ";
	cin>>x>>y;
	cout<<"\nEnter the UG student details : ";
	for(int i=0;i<x;i++) 
		u[i].getdata();
	cout<<"\nEnter the PG student details : ";
	for(int i=0;i<y;i++) 
		p[i].getdata();
	cout<<"\n\t\t UG STUDENTS \t\t"<<endl;
	for(int i=0;i<x;i++)
		u[i].print();
	cout<<"\n\t\t PG STUDENTS \t\t"<<endl;
	for(int i=0;i<y;i++)
		p[i].print();
	for(int i=0;i<8;i++) {
		uc=0;
		uage=0;
		for(int j=0;j<x;j++) {
			if(u[j].gs()==i+1) {
				uage+=u[j].ga();
				uc++;
			}
		}
		if(uc!=0)
			cout<<"\nAverage age of UG semester "<<i+1<<" is : "<<uage/uc;
	}
		
	for(int i=0;i<8;i++) {
		pc=0;
		page=0;
		for(int j=0;j<y;j++) {
			if(p[j].gs()==i+1) {
				page+=p[j].ga();
				pc++;
			}
		}
		if(pc!=0)
			cout<<"\nAverage age of PG semester "<<i+1<<" is : "<<page/pc;
	}
	cout<<"\n";
	return 0;
}
