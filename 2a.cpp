#include<iostream>
#include<string>
using namespace std;
class Employee {
	private:
		string name, num;
		double basic, DA, IT, net_sal;
	public:
		void read();
		void print();
		void cal();
};
void Employee::read() {
	cout<<"\nEnter the employee name and number : ";
	cin>>name>>num;
	cout<<"\nEnter the employee Basic salary : ";
	cin>>basic;
}
void Employee::print() {
	cout<<"\nThe employee number and name : ";
	cout<<num<<" "<<name;
	cout<<"\n Basic, DA, IT, Net Salary = : ";
	cout<<basic<<","<<DA<<","<<IT<<","<<net_sal<<endl;
}
void Employee::cal() {
	DA=0.52*basic;
	IT=((0.52*basic)+basic)*0.3;
	net_sal=(basic+DA)-IT;
}
int main() {
	int n;
	cout<<"\nEnter number of employees : ";
	cin>>n;
	Employee *e=new Employee[n];
	for(int i=0;i<n;i++) {
		e[i].read();
		e[i].cal();
	}
	for(int i=0;i<n;i++) 
		e[i].print();
	return 0;
}
