#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
	virtual void put()
	{
		cout<<"Virtual Part";
	}
};
class derive:public base
{
	public:
	void put()
	{
		cout<<"Ordinary Part";
	}
};
int main()
{
	class base *ptr;
	class derive d;
	ptr=&d;
	clrscr();
	ptr->put();
	return 0;
}