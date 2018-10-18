#include<iostream>
#include<conio.h>
using namespace std;
class one
{
	private:
	int x,y;
	public:
	virtual void get()=0;
	virtual void put()=0;
};
class two:public one
{
	private:
	int a,b,c;
	public:
	void get()
	{
		cout<<"Enter A:";
		cin>>a;
		cout<<"Enter B:";
		cin>>b;
	}
	void put()
	{
		c=a+b;
		cout<<a<<"+"<<b<<"="<<c<<"\n\n";
	}
};
int main()
{
	class one *ptr;
	class two t;
	ptr=&t;
	ptr->get();
	ptr->put();
	return 0;
}