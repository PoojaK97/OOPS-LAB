#include<iostream>
#include<fstream>
using namespace std;
int main()
{	int roll, m1, m2, m3;
	char name[100];
	char g;
	ofstream fo;
	fo.open("imp1.dat",ios::binary);
	cout<<"enter name and roll\n";
	cout<<"and enter marks of three subj\n";
	cin>>name>>roll;
	cin>>m1>>m2>>m3;
	fo.write(name,sizeof(name));
	fo.write((char*)&roll,sizeof(roll));
	fo.write((char*)&m1,sizeof(m1));
	fo.write((char*)&m2,sizeof(m2));
	fo.write((char*)&m3,sizeof(m3));
	int sum=m1+m2+m3;
	if(sum>270)
	g='A';
	else if(sum>240)
	g='B';
	else if(sum>210)
	g='C';
	else if(sum>180)
	g='D';
	else if(sum>150)
	g='E';
	else
	g='F';
	//cout<<g<<endl;
	fo.write(&g,sizeof(g));
	cout<<"name\troll\tgrade\n";
	fo.close();
	ifstream fi;
	fi.open("imp1.dat");
	fi.read(name,sizeof(name));
	cout<<name<<"\t";
	fi.read((char*)&roll,sizeof(roll));
	cout<<roll<<"\t";
	fi.read(&g,sizeof(g));
	cout<<g<<endl;
	fi.close();
	return 0;
}
