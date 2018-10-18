#include<iostream>
#include<conio.h>
using namespace std;
class one
{
	private:
	int x,y;
	public:
	virtual void get()
	{
	}
	virtual void put()
	{
	}
};
class two:public one
{
	private:
	int a,b,c;
	public:
	void get()
	{
		cout<<"Enter A and B==>";
		cin>>a>>b;
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
	class two ob;
	ptr=&ob;
	ptr->get();
	ptr->put();
	return 0;
}