#include <iostream>
using namespace std;
class Grade
{
  string name,roll;
  int m1,m2,m3;
public:
  Grade();
  void print();
  void grade();
};
Grade :: Grade()
{
  cout<< "Enter name and roll no" << endl;
  cin>>name>>roll;
  cout<<"Enter marks of three subjects"<<endl;
  cin>>m1>>m2>>m3;
}
void Grade :: print()
{
  cout<<"Student details are:"<< endl;
  cout<<"Name:"<<name<<endl<<"Roll No:"<<roll<<endl;
}
void Grade :: grade()
{ char g;
  int avg=(m1+m2+m3)/3;
  if (avg>=90)
  g='A';
  else if (avg>=80)
  g='B';
  else if (avg>=70)
  g='C';
  else if (avg>=60)
  g='D';
  else if (avg>=50)
  g='E';
  else
  g='F';
  cout << "Grade awarded:" << g << endl;
}
int main()
{
  int i,n;
  cout<<"Enter number of students\n";
  cin>>n;
  Grade s[n];
  Grade *p;
  p=s;
  for (i=0;i<n;i++)
  {
    p[i].print();
    p[i].grade();
  }
  return 0;
}
