#include<iostream>
using namespace std;
class comp
{
private:
int a1,a2;
float b1,b2;
public:
void get()
{
cout<<"Enter a and b";
cin>>a1>>b1;
}
int cube(int a1)
{
return (a1*a1*a1);
}
int cube(float b1)
{
return (b1*b1*b1);
}
void put()
{
a2=cube(a1);
b2=cube(b1);
cout<<a2;
cout<<b2;
}};
int main()
{
comp c;
c.get();
c.put();
return 0;
}