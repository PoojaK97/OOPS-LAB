#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void display_list(list<int> l)
{
    list<int>::iterator p;
    for(p=l.begin();p!=l.end();p++)
        cout<<*p<<" ";
    cout<<endl;     
}
int main()
{
    int n;
    list <int>l1,l2;
    cout<<"enter no. of elements of list 1\n";
    cin>>n;
    cout<<"adding elements at end of list\n";
    for(int i=0;i<n;i++)
    {
        int ele;
        cout<<"enter element\n";
        cin>>ele;
        l1.push_back(ele);
    }
    list<int>::iterator p;
    cout<<"list1\n";
    display_list(l1);
    cout<<"enter no. of elements in list 2\n";
    cin>>n;
    cout<<"adding elements at the front\n";
    for(int i=0;i<n;i++)
    {
        int ele;
        cout<<"enter element\n";
        cin>>ele;
        l2.push_front(ele);
    }
    cout<<"list2\n";
    display_list(l2);
    cout<<"number of elements in list1 is "<<l1.size()<<endl;
    int num;
    cout<<"enter value to be removed from list 1\n";
    cin>>num;
    l1.remove(num);
    cout<<"list 1 wiht value removed\n";
    display_list(l1);
    l2.unique();
    cout<<"list 2 without duplicate elements\n";
    display_list(l2);
    l2.reverse();
    cout<<"reverse of list 2\n";
    display_list(l2);
    l1.merge(l2);
    l1.sort();
    cout<<"mergded and sorted list\n";
    display_list(l1);
    return 0;
}