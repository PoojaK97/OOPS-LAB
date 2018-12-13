#include <iostream>
#include<map>
#include<iterator>
using namespace std;

void display(map<char,int> m)
{
    map<char, int>::iterator p;
    cout<<"Key\tElement\n";
    for(p=m.begin();p!=m.end();p++)
        cout<<p->first<<"\t"<<p->second<<endl;
}

int main()
{
    map<char,int> m;
    int n;
    char key;
    cout<<"enter number of elements\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char key;
        int ele;
        cout<<"enter char key and integer element\n";
        cin>>key>>ele;
        m.insert(pair<char,int>(key,ele));
    }
    cout<<"Map\n";
    display(m);
    cout<<"enter key of element to be deleted\n";
    cin>>key;
    m.erase(key);
    cout<<"new map\n";
    display(m);
    cout<<"enter key\n";
    cin>>key;
    cout<<"Respective element: "<<m[key];
    return 0;
}