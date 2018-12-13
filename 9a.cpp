#include<iostream>
using namespace std;
void mult(int x){
	try
	{
		if(x>0)
			throw x;
		else
			throw (char)x;
	}
	catch(int x) {
		cout<<"\nCaught integer -> value was >0";
	}
	catch(char x) {
		cout<<"\nCaught character -> values was <0";
	}
}
void rethrow() {
	try {
		throw 20;
	}
	catch(int x){
		cout<<"\nCaught exception in function, now rethrowing";
		throw;
	}
}
int main() {
	int c;
	cout<<"\nEnter 1 to test multiple try and catch blocks and 2 to test rethrowing exceptions : ";
	cin>>c;
	switch (c){
		case 1:
			cout<<"\nProgram to test multiple catches : ";
			cout<<"\nFirst passing 10 to function";
			mult(10);
			cout<<"\nSecond passing -10 to function";
			mult(-10);
			break;
		case 2:
			cout<<"\nIn main";
			try{
				rethrow();
			}
			catch(int a) {
				cout<<"\nCaught rethrown exception in main";
			}
			break;
	}
	cout<<"\n";
	return 0;
}

	
