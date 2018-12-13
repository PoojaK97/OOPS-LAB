#include<iostream>
using namespace std;

class A{
public:
  A(){
    cout<<"A constructor\n";
  }
  ~A(){
    cout<<"A destructor\n";
  }
};

class B:virtual public A{
public:
  B(){
    cout<<"B constructor\n";
  }
  ~B(){
    cout<<"B destructor\n";
  }
};

class C:virtual public A{
public:
  C(){
    cout<<"C constructor\n";
  }
  ~C(){
    cout<<"C destructor\n";
  }
};

class D:public B,public C{
public:
  D(){
    cout<<"D constructor\n";
  }
  ~D(){
    cout<<"D destructor\n";
  }
};

int main(){
  D d;
}
