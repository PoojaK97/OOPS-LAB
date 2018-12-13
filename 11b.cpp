#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
        fstream z, y;
        char content [100];
        cout<<"Inserting into file\n";
        y.open("x.txt",ios::out|ios::app);
        cout<<"Enter Content\n";
        cin>>content;
        y<<content;
        y.close();
        y.open("x.txt",ios::in);
        z.open("a.txt",ios::out|ios::app);
                while(!y.eof()){
                y>>content;
                z<<content;
        }
        y.close();
        z.close();
        cout<<"The new file is\n";
        z.open("a.txt",ios::in);
        while(!z.eof()){
                z>>content;
                cout<<content;
        }
        z.close();
        return 0;
}

