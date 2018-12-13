#include<iostream>
using namespace std;
template<class X>
class bsort {
	private :
		int n;
		X *a;
	public :
		bsort(int x) {
			n=x;
			a = new X[n];
		}
	void read() {
		cout<<"\nEnter the array elements : ";
		for(int i=0;i<n;i++) 
			cin>>a[i];
	}
	void print() {
		cout<<"\nThe sorted elements are : ";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	void sort() {
		X t;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j<n-1-i;j++) {
				if(a[j]>a[j+1]) 	{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
	}
};
int main() {
	int a, b;
	cout<<"\nEnter the number of elements in the array : ";
	cin>>a;
	cout<<"\nEnter 1 for INTEGER, 2 for FLOAT, 3 for CHAR type array : ";
	cin>>b;
	if(b==1) {
		bsort <int>arr(a);
		arr.read();
	        arr.sort();
		arr.print();
	}
	else if(b==2) {
		bsort <float>arr(a);
		arr.read();
	        arr.sort();
		arr.print();
	}
	else if(b==3) {
		bsort <char>arr(a);
		arr.read();
	        arr.sort();
		arr.print();
	}
	return 0;
}
