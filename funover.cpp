#include<iostream>
#include<conio.h>
using namespace std;
class comp
{
	int a1,a2;
	float b1,b2;
	public:
	void get()
	{
		cout<<"Enter integer No.:";
		cin>>a1;
		cout<<"Enter float no.:";
		cin>>b1;
	}
	int cube(int a1)
	{
		return(a1*a1*a1);
	}
	float cube(float b1)
	{
		return(b1*b1*b1);
	}
	void put()
	{
		a2=cube(a1);
		b2=cube(b1);
		cout<<a2<<"\n"<<b2;
	}
};
int main()
{
	comp c;
	c.get();
	c.put();
}