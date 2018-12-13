#include<iostream>
#include<stdlib.h>
using namespace std;
class Stack {
	private: 
		int *a;
		int top;
		int capacity;
	public:
		Stack() { top=-1; }
		Stack(int x) {
			top=-1;
			a=new int[x];
			capacity=x;
		}
		//int exception;
		void push(int);
		int pop();
		void display();
};
void Stack::push(int n) {
	try {
		if(top>=capacity-1)
			throw n;
		else
			a[++top]=n;
	}catch(int x) {
		cout<<"\nStack overflow! ";
		exit(0);
	}
}
int Stack::pop() {
	try {
		int n=0;
		if(top<0)
			throw n;
		else
			return a[top--];
	}catch(int n) {
		cout<<"\nStack underflow! ";
		exit(0);
	}
}
void Stack::display() {
	try {
		int n=0;
		if(top<0)
			throw n;
		else {
			cout<<"\nCurrent stack is : "<<endl;
			for(int i=0;i<=top;i++)
				cout<<" "<<a[i];
		}
	}catch(int n) {
		cout<<"\nStack is empty! ";
	}
}
int main() {
	int m;
	cout<<"\nEnter the size of stack : ";
	cin>>m;
	Stack s(m);
	while(1) {
		cout<<"\nEnter 1.PUSH 2.POP 3.DISPLAY 4.EXIT : ";
		cin>>m;
		switch(m){
			case 1: 
				cout<<"\nEnter element to be pushed : ";
				cin>>m;
				s.push(m);
				break;
			case 2:
				cout<<"\nThe element popped is : "<<s.pop();
				break;
			case 3:
				s.display();
				break;
			case 4: exit(0);
			default: exit(0);
		}
	}
	return 0;
}
