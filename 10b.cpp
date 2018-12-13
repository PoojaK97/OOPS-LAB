#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void display(vector <int> a)
{   
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    vector <int> a;
    int ele,pos;
    cout<<"enter no. of elements\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element\n";
        cin>>ele;
        a.push_back(ele);
        cout<<" sdad\n";
    }
    cout<<"vector\n";
    display(a);
    cout<<"enter element and position to beinserted\n";
    cin>>ele>>pos;
    a.insert(a.begin()+pos,ele);
    cout<<"vector\n";
    display(a);
    a.pop_back();
    cout<<"vector with last element popped\n";
    display(a);
    cout<<"no. of elements in vector: "<<a.size()<<endl;
    a.clear();
    cout<<"vector cleared\n";
    return 0;
}
