#include<iostream>
using namespace std;
class counter
{
private:
int count;
public:
counter()
{
count=0;
}
int getdata()
{
return count;
}
void operator++()
{
++count;
}
void operator++(int=0)
{
count++;
}
};
int main()
{
counter c1,c2;
++c1;
c2++;
c2++;
cout<<c1.getdata();
cout<<c2.getdata();
return 0;
}
